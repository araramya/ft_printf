/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araramya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 13:14:25 by araramya          #+#    #+#             */
/*   Updated: 2021/04/10 17:33:00 by araramya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_isflag(char **c)
{
	while (**c == '-' || **c == '0')
	{
		if (**c == '-')
			flags.minus = 1;
		else
			flags.zero = 1;
		(*c)++;
	}
	if (flags.minus && flags.zero)
		flags.zero = 0;
}

void	ft_type(char *c)
{
	if (*c == 'c')
		ft_print_char();
	else if (*c == 's')
		ft_print_str();
	else if (*c == 'd')
		ft_print_digit();
	else if (*c == 'u')
		ft_print_digit();
	else if (*c == 'x')
		ft_print_hex();
	else if (*c == 'X')
		ft_print_upperhex();
	else if (*c == '%')
		ft_print_percent();
}

void	ft_space(char **f)
{
	(*f)++;
	ft_putchar_fd(' ', 1);
}

void	ft_second_printf(int *arg, va_list *ptr, char **f)
{
	unsigned d;

	if (**f == '%')
	{
		(*f)++;
		if (**f == ' ')
			ft_space(&(*f));
		if (**f == '-' || **f == '0')
			ft_isflag(&(*f));
		*arg = **f == '*' ? va_arg(*ptr, int) : 0;
		ft_iswidth(&(*f), *arg);
		*arg = (**f == '.' && *(*f + 1) == '*') ? va_arg(*ptr, int) : 0;
		ft_isslice(&(*f), *arg);
		if (**f == 'u')
		{
			d = (unsigned)va_arg(*ptr, unsigned);
			flags.unsign = d;
		}
		else if (**f != '%')
			flags.arg = va_arg(*ptr, void *);
		else
			flags.arg = "%";
		ft_type(*f);
		(*f)++;
	}
}

int		ft_printf(const char *form, ...)
{
	va_list		ptr;
	char		*f;
	int			arg;

	f = (char *)form;
	va_start(ptr, form);
	flags.count = 0;
	while (*f)
	{
		ft_second_printf(&arg, &ptr, &f);
		if (*f != '\0' && *f != '%')
		{
			ft_putchar_fd(*f, 1);
			flags.count++;
			f++;
		}
	}
	va_end(ptr);
	return (flags.count / 2);
}

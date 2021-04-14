/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araramya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 14:18:19 by araramya          #+#    #+#             */
/*   Updated: 2021/04/14 21:56:54 by araramya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_is_in_type_list(int c)
{
	return ((c == 'c') || (c == 's') || (c == 'p') || (c == 'd') || (c == 'i')
			|| (c == 'u') || (c == 'x') || (c == 'X') || (c == '%'));
}

int		ft_is_in_flags_list(int c)
{
	return ((c == '-') || (c == ' ') || (c == '0') || (c == '.') || (c == '*'));
}

int		ft_parsing(int c, t_flags flags, va_list args)
{
	int count;

	count = 0;
	if (c == 'c')
		count = ft_parse_char(va_arg(args, int), flags);
	else if (c == 's')
		count = ft_parse_string(va_arg(args, char *), flags);
	else if (c == 'p')
		count = ft_parse_pointer(va_arg(args, unsigned long long), flags);
	else if (c == 'd' || c == 'i')
		count = ft_parse_int(va_arg(args, int), flags);
	else if (c == 'u')
		count += ft_parse_uint((unsigned int)va_arg(args, unsigned int),
		flags);
	else if (c == 'x')
		count += ft_parse_hexa(va_arg(args, unsigned int), 1, flags);
	else if (c == 'X')
		count += ft_parse_hexa(va_arg(args, unsigned int), 0, flags);
	else if (c == '%')
		count += ft_parse_percent(flags);
	return (count);
}

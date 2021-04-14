/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araramya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 14:15:09 by araramya          #+#    #+#             */
/*   Updated: 2021/04/14 14:31:29 by araramya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

t_flags		ft_init_flags(void)
{
	t_flags		flags;

	flags.dot = -1;
	flags.minus = 0;
	flags.star = 0;
	flags.type = 0;
	flags.width = 0;
	flags.zero = 0;
	return (flags);
}

int			ft_flag_parse(const char *save, int i, t_flags *flags, va_list args)
{
	while (save[i])
	{
		if (!ft_isdigit(save[i]) && !ft_is_in_type_list(save[i])
		&& !ft_is_in_flags_list(save[i]))
			break ;
		if (save[i] == '0' && flags->width == 0 && flags->minus == 0)
			flags->zero = 1;
		if (save[i] == '.')
			i = ft_flag_dot(save, i, flags, args);
		if (save[i] == '-')
			*flags = ft_flag_minus(*flags);
		if (save[i] == '*')
			*flags = ft_flag_width(args, *flags);
		if (ft_isdigit(save[i]))
			*flags = ft_flag_digit(save[i], *flags);
		if (ft_is_in_type_list(save[i]))
		{
			flags->type = save[i];
			break ;
		}
		i++;
	}
	return (i);
}

int			ft_parse_save(const char *save, va_list args)
{
	int			i;
	t_flags		flags;
	int			count;

	i = 0;
	count = 0;
	while (1)
	{
		flags = ft_init_flags();
		if (!save[i])
			break ;
		else if (save[i] == '%' && save[i + 1])
		{
			i = ft_flag_parse(save, ++i, &flags, args);
			if (ft_is_in_type_list(save[i]))
				count += ft_parsing((char)flags.type, flags, args);
			else if (save[i])
				count += ft_putchar(save[i]);
		}
		else if (save[i] != '%')
			count += ft_putchar(save[i]);
		i++;
	}
	return (count);
}

int			ft_printf(const char *input, ...)
{
	const char	*save;
	va_list		args;
	int			count;

	save = ft_strdup(input);
	count = 0;
	va_start(args, input);
	count += ft_parse_save(save, args);
	va_end(args);
	free((char *)save);
	return (count);
}

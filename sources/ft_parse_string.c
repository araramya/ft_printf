/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araramya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 14:17:24 by araramya          #+#    #+#             */
/*   Updated: 2021/04/14 21:47:52 by araramya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int		ft_put_part_int(char *str, t_flags flags)
{
	int	count;

	count = 0;
	if (flags.dot >= 0)
	{
		count += ft_parse_width(flags.dot, ft_strlen(str), 0);
		count += ft_putstrprec(str, flags.dot);
	}
	else
	{
		count += ft_putstrprec(str, ft_strlen(str));
	}
	return (count);
}

int				ft_parse_string(char *str, t_flags flags)
{
	int count;

	count = 0;
	if (!str)
		str = "(null)";
	if (flags.dot >= 0 && (size_t)flags.dot > ft_strlen(str))
		flags.dot = ft_strlen(str);
	if (flags.minus == 1)
		count += ft_put_part_int(str, flags);
	if (flags.dot >= 0)
		count += ft_parse_width(flags.width, flags.dot, 0);
	else
		count += ft_parse_width(flags.width, ft_strlen(str), 0);
	if (flags.minus == 0)
		count += ft_put_part_int(str, flags);
	return (count);
}

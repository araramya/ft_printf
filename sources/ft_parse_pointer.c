/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araramya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 14:17:10 by araramya          #+#    #+#             */
/*   Updated: 2021/04/14 20:56:14 by araramya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int		ft_in_put_part_pointer(char *pointer, t_flags flags)
{
	int count;

	count = 0;
	count += ft_putstrprec("0x", 2);
	if (flags.dot >= 0)
	{
		count += ft_parse_width(flags.dot, ft_strlen(pointer), 1);
		count += ft_putstrprec(pointer, ft_strlen(pointer));
	}
	else
		count += ft_putstrprec(pointer, ft_strlen(pointer));
	return (count);
}

int				ft_parse_pointer(unsigned long long ull, t_flags flags)
{
	char	*pointer;
	int		count;

	count = 0;
	if (ull == 0 && flags.dot == 0)
	{
		count += ft_putstrprec("0x", 2);
		return (count += ft_parse_width(flags.width, 0, 1));
	}
	pointer = ft_ull_base(ull, 16);
	pointer = ft_str_tolower(pointer);
	if ((size_t)flags.dot < ft_strlen(pointer))
		flags.dot = ft_strlen(pointer);
	if (flags.minus == 1)
		count += ft_in_put_part_pointer(pointer, flags);
	count += ft_parse_width(flags.width, ft_strlen(pointer) + 2, 0);
	if (flags.minus == 0)
		count += ft_in_put_part_pointer(pointer, flags);
	free(pointer);
	return (count);
}

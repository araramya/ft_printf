/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araramya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 14:16:54 by araramya          #+#    #+#             */
/*   Updated: 2021/04/14 20:51:23 by araramya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_parse_percent(t_flags flags)
{
	int count;

	count = 0;
	if (flags.minus == 1)
		count += ft_putstrprec("%", 1);
	count += ft_parse_width(flags.width, 1, flags.zero);
	if (flags.minus == 0)
		count += ft_putstrprec("%", 1);
	return (count);
}

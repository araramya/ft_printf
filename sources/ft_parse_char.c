/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araramya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 14:16:08 by araramya          #+#    #+#             */
/*   Updated: 2021/04/14 14:33:53 by araramya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_parse_char(char c, t_flags flags)
{
	int	count;

	count = 0;
	if (flags.minus == 1)
		ft_putchar(c);
	count = ft_parse_width(flags.width, 1, 0);
	if (flags.minus == 0)
		ft_putchar(c);
	return (count + 1);
}

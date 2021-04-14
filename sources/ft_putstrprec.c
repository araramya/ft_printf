/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrprec.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araramya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 14:20:28 by araramya          #+#    #+#             */
/*   Updated: 2021/04/14 21:59:18 by araramya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_putstrprec(char *str, int prec)
{
	int count;

	count = 0;
	while (str[count] && count < prec)
		ft_putchar(str[count++]);
	return (count);
}

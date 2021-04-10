/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araramya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 13:15:51 by araramya          #+#    #+#             */
/*   Updated: 2021/04/10 18:12:35 by araramya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_print_char(void)
{
	int len;

	len = 0;
	if (flags.minwidth > 1)
	{
		len = flags.minwidth;
		if (!flags.minus)
		{
			while (((len--) - 1))
				ft_putchar_fd(' ', 1);
			ft_putchar_fd(((char)flags.arg), 1);
		}
		else
		{
			ft_putchar_fd(((char)flags.arg), 1);
			while (((len--) - 1))
				ft_putchar_fd(' ', 1);
		}
	}
	else
		ft_putchar_fd(((char)flags.arg), 1);
}

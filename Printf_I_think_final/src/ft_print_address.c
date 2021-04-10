/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araramya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 13:15:37 by araramya          #+#    #+#             */
/*   Updated: 2021/04/10 18:05:52 by araramya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_print_address(void)
{
	char	*ptr;
	int		reminder;
	int		i;
	size_t	n;

	i = 0;
	n = (size_t)flags.arg;
	if (flags.arg == NULL)
		ptr = "0";
	else
	{
		ptr = (char*)malloc(13);
		while (n)
		{
			reminder = n % 16;
			n /= 16;
			if (reminder < 10)
				ptr[i] = reminder + '0';
			else
				ptr[i] = 97 + (reminder - 10);
			i++;
		}
	}
	flags.arg = ft_revers_str(ptr);
	ft_print_str();
}

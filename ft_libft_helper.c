/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araramya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 14:12:02 by araramya          #+#    #+#             */
/*   Updated: 2021/03/01 14:12:04 by araramya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char *ft_strdup(const char *s1)
{
	char *cpy;
	char *s1_cpy;
	int i;
	int size;

	i = 0;
	size = 0;
	s1_cpy = (char *)s1;
	while(s1_cpy[size])
		size++
	if(!(cpy = (char*)malloc(sizeof(char) * size + 1)))
		return (NULL)
	while(s1_cpy[i])
	{
		cpy[i] = s1_cpy[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

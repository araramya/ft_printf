/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araramya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 10:24:15 by araramya          #+#    #+#             */
/*   Updated: 2021/03/15 10:24:19 by araramya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t ft_parse_string(char *spec, va_list ap)
{
    size_t count;
    size_t i;
    t_flags flag;

    count = 0;
    i = 0;
    while(spec[i])
    {
        flags = ft_flag_inital();
        if(spec[i] == '%' && spec[i+1])
        {
            i++;
            i = // function that check flags
        }
    }

}

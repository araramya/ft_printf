/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araramya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 14:10:57 by araramya          #+#    #+#             */
/*   Updated: 2021/03/01 14:11:01 by araramya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/ft_printf.h"

int ft_printf(const char *spec , ... )
{
    int count;
    char *str;
    va_list args;

    if(!(str = ft_strdup(spec)))
        return (-1);
    count = 0;
    va_start(str, spec);
    count += ft_parse_str(spec, args); //for parsing str
    va_end(args);
    free(args);
    return (count);
}






















// int ft_printf(const char *spec, ...)
// {
//     int count;
//     char *str;
//     va_list ap;

//     count = 0;
//     if(!(str = ft_strdup(spec))
//         return(-1);
//     va_start(ap, s);
//     count += ft_parse_string(str,ap);

// }

// int main()
// {

//     ft_printf("Arsen");
//     ft_printf("\n");
//     ft_printf("%d", 24);
//     ft_printf("\n");
//     ft_printf("%i", 56);
    
// }
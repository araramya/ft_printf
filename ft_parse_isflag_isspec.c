/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_isflag_isspec.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araramya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 12:04:06 by araramya          #+#    #+#             */
/*   Updated: 2021/03/15 12:04:09 by araramya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_isspec(int s)//for specificator
{
    if(s == 'c' || s == 's'|| s == 'p' || s == 'd' || s == 'u' || s == 'u' || s == 'x' || s == 'X' || s == '%')
        return (1);
    return (0);
}

int ft_isflag(int f) // for flags
{
    if(f == '-' || f == '0' || f == '.' || f == '*')
        return (1);
    return (0);
}

int ft_check_flag(char *str, int i; t_flag *flags, va_list ap)
{
    while(str[i])
    {
        if(!ft_isspec(str[i]) && !ft_isflag(str[i] && !ft_isdigit(str[i]))
            break;
        if(str[i] == '-')
            *flags = // function for parse minus NEED TO Code
        if(str[i] == '.')
            *flags = // function for parse dot NEED TO CODE
        if(str[i]) == '0'
            //do something I need to think
        if(str[i] == '*')
            *flags == //function for parse width NEED TO CODE
    }
}

//int function for printinf % NEED TO THINK

int ft_check_spec(int c, t_flags flags, va_list ap)
{
    int count;
    count = 0;
    if(c == 'c')
        count += //function for parse CHARACTER spec NEED TO CODE
    if(c == 's')
        count += // function to parse STRING spec NEED TO CODE
    if(c == 'p')
        count += //function to parse POINTER spec NEED TO CODE
    if (c == 'd')
        count += //function to parse DECIMAL spec NEED TO CODE
    if(c == 'i')
        count += //function to parse I(dk why i ?) spec NEED TO CODE
    if(c == 'u') 
        count += //function tp parse UNSIGNED INTEGER spec NEED TO CODE
        
    

        
}

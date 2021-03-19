/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araramya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 13:58:21 by araramya          #+#    #+#             */
/*   Updated: 2021/03/01 13:58:24 by araramya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <stdio.h> // DEL LATER

typedef struct s_flags
{
    int spec;
    int width;
    int minus;
    int zero;
    int dot;
    int star;
    int printed;
}               t_flags;






//here should be libft files 


#endif









// #ifndef FT_PRINTF
// #define FT_PRINTF

// #include <stdio.h> // for printf DELETE LATER
// #include <stdarg.h>  //for va_start, va_end, va_arg, va_copy
// #include <unistd.h>

// typedef s_flags
// {
//     int spec;
//     int width;
//     int minus;
//     int zero;
//     int dot;
//     int star;
// }       t_flags;
// typedef enum e_format_type
// {
//     PF_INT = 0b1;
// }           t_format_type;

// int     ft_printf(const char *format, ...);
// size_t  ft_parse_string(char *s, va_list ap);
// t_flags ft_flag_inital();
// int ft_isspec(int s);
// int ft_isflag(int f);
// int ft_check_flag(char *str, int i; t_flag *flags, va_list ap);
// int ft_check_spec(int c, t_flags flags, va_list ap);
// // here will be libft function prototypes ::DELETE LATER::
// char *ft_strdup(const char *s1);
// void	ft_putchar(char c);
// int ft_isdigit(int c);
// //end of libft function prototypes ::SURE THAT YOU DELETE IT ::
// #endif

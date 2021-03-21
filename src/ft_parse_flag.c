#include "inc/ft_printf.h"

int ft_parse_flag(const char *str, int i, t_flags *flags, va_list args)
{
    while(str)
    {
        if(!ft_isdigit(str[i]) && !ft_isspec(str[i]) && !ft_isflag(str[i]))
            break;
        if(str[i] == '0' && flags->width == 0 && flags->minus == 0)
            flags->zero = 1;
        if(str[i] == '.')
            i = ft_flag_dot(str, i , flags, args);
        if(str[i] == '-')
            *flags = ft_flag_minus(*flags);
        if(str[i] == '*')
            *flags = ft_flag_width(args, *flags);
        if(ft_isdigit(str[i]))
            *flags = ft_flag_digit(str[i], *flags);
        if(ft_isspec(str[i]))
        {
            flags->type = str[i];
            break;
        } 
        i++;
    }
    return (i);
}
#include "inc/ft_printf.h"

int ft_flag_dot(const char *str, int start, t_flags *flags, va_list args)
{
    int i;

    i = start;
    i++;
    if(str[i] == '*')
    {
        flags->dot = va_arg(args, int);
        i++;
    }
    else
    {
        flags->dot = 0;
        while(ft_isdigit(str[i]))
            flags->dot = (flags->dot * 10)+(str[i++] - '0');
    }
    return (i);
}
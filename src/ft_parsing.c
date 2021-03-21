#include "inc/ft_printf.h"

int     ft_parsing(int c, t_flags flags, va_list args)
{
    int count;

    count = 0;
    if(c == 'c')
        count = ft_parse_char(va_arg(args, int), flags); // need to code
    else if(c == 's')
        count = ft_parse_string(va_arg(args, char*), flags); // need to code
    else if(c == 'p')
        count = ft_parse_pointer(va_arg(args, unsigned long long),flags); // need to code 
    else if(c == 'd' || c == 'i')
        count = ft_parse_int(va_arg(args, int), flags);
    else if(c == 'u')
        count += ft_parse_unsigned_int((unsigned int)va_arg(args, unsigned int), flags); // need to code
    else if(c == 'x')
        count += ft_parse_hex(va_arg(args, unsigned int), 1, flags);
    else if(c == 'X')
        count += ft_parse_hex(va_arg(args, unsigned int), 0, flags);
    else if(c == '%')
        count += ft_parse_percent(flags);
    return (count);      
}
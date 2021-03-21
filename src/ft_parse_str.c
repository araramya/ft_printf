#include "inc/ft_printf.h"

int ft_parse_str(const char * str, va_list args)
{
    int i;
    t_flags flags;
    int count;

    i = 0;
    count = 0;
    while(1)
    {
        flags = ft_flag_inital();
        if(!str[i])
            break;
        else if(str[i] == '%' && str[i + 1])
        {
            i = ft_parse_flag(str, ++i, &flags, args);
            if(ft_isspec(str[i]))
                count += ft_parsing((char)flags.type, flags, args);
            else if(str[i])
                count += ft_putchar(str[i]);
        }
        else if(str[i] != '%')
            count += ft_putchar(str[i]);
        i++;
    }
    return (count);
}
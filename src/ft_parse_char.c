#include "../inc/ft_printf.h"
int ft_parse_char(char c, t_flags flags)
{
    int count;
    count = 0;
    if(flags.minus == 1)
        ft_putchar_ordinary(c);
    count = ft_parse_width(flags.width, 1, 0);
    if(flags.minus == 0)
        ft_putchar_ordinary(c);
    return (count + 1 );
}
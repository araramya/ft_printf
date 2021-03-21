#include "../inc/ft_printf.h"

int ft_parse_width(int width, int minus, int has_zero)
{
    int count;

    count = 0;
    while(width - minus > 0)
    {
        if(has_zero)
            ft_putchar_ordinary('0');
        else
            ft_putchar_ordinary(' ');
        width -= 1;
        count++;
    }
    return (count);
}
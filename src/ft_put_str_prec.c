#include "../inc/ft_printf.h"

int ft_put_str_prec(char *str, int prec)
{
    int count;

    count = 0;
    while(str[count] && count < prec)
        ft_putchar_ordinary(str[count++]);
    return (count);
}
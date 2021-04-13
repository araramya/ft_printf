#include "../includes/ft_printf.h"

int ft_putstrprec(char *str, int prec)
{
    int count;

    count = 0;
    while(str[count] && count < prec)
        ft_putchar(str[count++]);
    return (count);
}
#include "../inc/ft_printf.h"
int     ft_putchar_ordinary(int c)
{
    write(1, '&c', 1);
    return (1);
}

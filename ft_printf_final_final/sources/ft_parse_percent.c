#include "../includes/ft_printf.h"

int ft_parse_percent(t_flags flags)
{
    int count;

    count = 0;
    if(flags.minus == 1)
        count += ft_putstrprec("%", 1);
    count += ft_parse_width(flags.width, 1, flags.zero);
    if(flags.minus == 0)
        count += ft_putstrprec("%", 1);
        return (count);
}
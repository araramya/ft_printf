#include "inc/ft_printf.h"

t_flags ft_flag_width(va_list args, t_flags flags)
{
    flags.star = 1;
    flags.width = va_arg(args, int);
    if(flags.width < 0)
    {
        flags.minus = 1;
        flags.width *= -1;
    }
    return (flags);
}
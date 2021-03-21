#include "inc/ft_printf.h"

t_flags ft_flag_minus(t_flags flags)
{
    flags.zero = 0;
    flags.minus = 1;
    return (flags);
}
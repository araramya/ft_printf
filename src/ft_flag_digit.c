#include "inc\ft_printf.h"

t_flags ft_flag_digit(char c, t_flags flags)
{
    if(flags.star == 1)
        flags.width = 0;
    flags.width = (flags.width * 10) + (c - '0');
    return (flags);

}
#include "../ft_printf.h"

void ft_print_char(void)
{
    int len;

    len = 0;
    if(flags.minwidth > 1)
    {
        len = flags.minwidth;
        if(!flags.minus)
        {
            while(((len--) - 1))
                ft_putchar_fd(' ', 1);
            ft_putchar_fd(((char)flags.arg), 1);
        }
        else
        {
            ft_putchar_fd(((char)flags.arg), 1);
            while(((len--)-1))
            ft_putchar_fd(' ',1);
        }
    }
    else
        ft_putchar_fd(((char)flags.arg), 1);
}
#include "../includes/ft_printf.h"

static int ft_in_put_part_int(char *d_i, int save_i, t_flags flags)
{
    int count;

    count = 0;
    if(save_i < 0 && flags.dot >= 0)
        ft_putchar('-');
    if (flags.dot >= 0)
        count += ft_parse_width(flags.dot - 1, ft_strlen(d_i) - 1, 1);
    count += ft_putstrprec(d_i, ft_strlen(d_i));
    return (count);
}

static int ft_put_part_int(char *d_i, int save_i, t_flags flags)
{
    int count;

    count = 0;
    if(flags.minus == 1)
        count += ft_in_put_part_int(d_i, save_i, flags);
    if(flags.dot >= 0 && (size_t)flags.dot < ft_strlen(d_i))
        flags.dot = ft_strlen(d_i);
    if(flags.dot >= 0)
    {
        flags.width -= flags.dot;
        count += ft_parse_width(flags.width, 0, 0);
    }
    else
        count += ft_treat_width(flags.width, ft_strlen(d_i), flags.zero);
    if(flags.minus == 0)
        count += ft_in_put_part_int(d_i, save_i, flags);
    return(count);  
}

int ft_parse_int(int i, t_flags flags)
{
    char *d_i;
    int save_i;
    int count;

    save_i = i;
    count = 0;
    if (flags.dot == 0 && i == 0)
    {
        count += ft_parse_width(flags.width, 0, 0);
        return (count);
    }
    if(i < 0 && (flags.dot >= 0 || flags.zero == 1))
    {
        if(flags.zero == 1 && flags.dot == -1)
            ft_putstrprec("-", 1);
        i *= -1;
        flags.zero = 1;
        flags.width--;
        count++;
    }
    d_i = ft_itoas(i);
    count += ft_put_part_int(d_i, save_i, flags);
    free(d_i);
    return (count);
}
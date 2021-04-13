#include "../includes/ft_printf.h"

static int ft_in_put_part_hexa(char *hexa, t_flags flags)
{
	int count;
	if(flags.dot >= 0)
		count += ft_parse_width(flags.dot - 1, ft_strlen(hexa) - 1, 1);
	count += ft_putstrprec(hexa, ft_strlen(hexa));
	return (count);
}

static int ft_put_part_hexa(char *hexa, t_flags flags)
{
	int count;

	count = 0;
	if(flags.minus == 1)
		count += ft_in_put_part_hexa(hexa, flags);
	if(flags.dot >= 0 && (size_t)flags.dot < ft_strlen(hexa))
		flags.dot = ft_strlen(hexa);
	if (flags.dot >= 0)
	{
		flags.width -= flags.dot;
		count += ft_parse_width(flags.width, 0, 0);
	}
	else
		count += ft_parse_width(flags.width, ft_strlen(hexa), flags.zero);
	if(flags.minus == 0)
		count += ft_in_put_part_hexa(hexa,flags);
		return(count);
}

int ft_parse_hexa(unsigned int ui, int lower, t_flags flags)
{
	char *hexa;
	int count;

	count = 0;
	ui = (unsigned int)(4294967295 + 1 + ui);
	if(flags.dot == 0 && ui == 0)
	{
		count += ft_parse_width(flags.width, 0, 0);
		return (count);
	}
	hexa = ft_ull_base((unsigned long long)ui, 16);
	if (lower == 1)
		hexa = ft_str_tolower(hexa);
	count += ft_put_part_hexa(hexa, flags);
	free(hexa);
	return (count);
}

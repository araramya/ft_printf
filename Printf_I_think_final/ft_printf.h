/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araramya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 13:14:05 by araramya          #+#    #+#             */
/*   Updated: 2021/04/10 17:26:42 by araramya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./libft/libft.h"
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>

struct		s_flags
{
	int		minus;
	int		zero;
	int		dot;
	int		maxwidth;
	int		minwidth;
	void	*arg;
	size_t	unsign;
	int		count;
}			flags;

int			ft_printf(const char *format, ...);
void		ft_isflag(char **c);
void		ft_iswidth(char **c, int d);
void		ft_isslice(char **c, int d);
void		ft_istype(char *c);
void		ft_print_char(void);
void		ft_print_str(void);
void		ft_print_addres(void);
void		ft_print_digit(void);
void		ft_print_hex(void);
void		ft_print_upperhex(void);
void		ft_print_percent(void);
char		*ft_revers_str(char *s);
char		*ft_itoa_new(unsigned n);
void		ft_putstr_fd(char *s, int fd);
void		ft_putchar_fd(char c, int fd);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_inital.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: araramya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 11:07:16 by araramya          #+#    #+#             */
/*   Updated: 2021/03/15 11:07:21 by araramya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_flags ft_flag_inital()
{
    t_flag flag;

    flag.spec = 0;
    flag.width = 0;
    flag.minus = 0;
    flag.zero = 0;
    flag.dot = -1;
    flag.star = 0;
    return (flag)
}


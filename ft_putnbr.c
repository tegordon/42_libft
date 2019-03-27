/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 17:47:23 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/24 16:19:26 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Outputs the integer _n to the standard output.
*/

#include "libft.h"

void		ft_putnbr(int n)
{
	ft_putstr(ft_itoa(n));
}

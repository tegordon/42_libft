/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 17:47:23 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/28 08:23:05 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Outputs the integer _n to the standard output.
*/

#include "libft.h"

void		ft_putnbr(int n)
{
	char	*s;

	if (!(s = ft_itoa(n)))
		return ;
	ft_putstr(s);
	free(s);
}

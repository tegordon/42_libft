/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 03:28:41 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/24 13:18:00 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** -Takes an int-type value and returns it's length.
*/

#include "libft.h"

size_t		ft_intlen(int n)
{
	size_t	c;

	c = 0;
	if (n == -2147483648)
		return (11);
	if (n <= 0)
	{
		n *= -1;
		c = 1;
	}
	while (n > 0)
	{
		n /= 10;
		c++;
	}
	return (c);
}

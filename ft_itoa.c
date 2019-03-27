/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 02:43:39 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/24 13:26:49 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Allocates with malloc() and returns a "fresh" string ending with '\0'
**   representing the integer _n given as argument.
** - Negative numbers supported.
** - If the allocation fails, the fxn returns NULL.
*/

#include "libft.h"

char			*ft_itoa(int n)
{
	char	*str;
	size_t	len;

	len = ft_intlen(n);
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

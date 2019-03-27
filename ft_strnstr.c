/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 04:49:42 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/24 19:11:18 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	- finds the first occurence of the substring _little in the string _big,
**	where not more than _len characters are searched.
**
**	- terminating null bytes & characters appearing after a '\0'
**	are not compared.
**
**	- if little is an empty string, big is returned;
**	if /little occurs nowhere in /big, NULL is returned;
**	otherwise a pointer to the first character of the
**	first occurence of /little is returned.
*/

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	if (!*little)
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		while (big[i + j] && big[i + j] == little[j] && (i + j) < len)
		{
			if (!little[j + 1])
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (0);
}

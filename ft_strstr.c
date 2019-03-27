/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 04:47:23 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/24 19:27:26 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	- finds the first occurence of the substring _little in the string _big.
**
**	- terminating null bytes are not compared.
**
**	- if _little is an empty string, _big is returned;
**	if _little occurs nowhere in _big, NULL is returned;
**	otherwise a pointer to the first character of the
**	first occurence of _little is returned.
*/

#include "libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	int	i;

	if (!*little)
		return ((char*)big);
	while (*big)
	{
		i = 0;
		while (big[i] && big[i] == little[i])
		{
			if (!little[i + 1])
				return ((char*)big);
			i++;
		}
		big++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 07:11:41 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/24 16:14:53 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	 - Compares byte string _s1 to byte string _s2.
**
**   - Both strings are assumed to be _n bytes long.
**
**   - Returns zero if the two strings are identical,
**     otherwise returns the difference between the first two differing bytes,
**     treated as unsigned char values.
*/

#include "libft.h"

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n-- > 0)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

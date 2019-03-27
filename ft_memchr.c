/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 07:10:22 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/26 23:48:31 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	  Locates first occurence of _c (converted to unsigned char) in string _s.
**
**    Returns a pointer to the byte located,
**    or NULL if no such byte exists within _n bytes.
*/

#include "libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (n-- > 0)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((unsigned char *)(s + i));
		i++;
	}
	return (NULL);
}

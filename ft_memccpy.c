/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/22 01:14:17 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/24 13:41:44 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Copies bytes from string _src to string _dst. If the character _c
**   (as converted to an unsigned char) occurs in the string _src, the copy
**   stops and a pointer to the byte after the copy of _c
**   in the string _dst is returned. Otherwise, _n bytes are copied,
**   and a NULL pointer is returned.
*/

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	char			*buff_dst;
	char			*buff_src;
	unsigned char	buff_c;

	i = 0;
	buff_dst = (char *)dst;
	buff_src = (char *)src;
	buff_c = (unsigned char)c;
	while (buff_src[i])
	{
		buff_dst[i] = buff_src[i];
		if (buff_src[i] == buff_c)
		{
			i++;
			return (&buff_dst[i]);
		}
		i++;
	}
	if (i <= n)
		return (NULL);
	ft_bzero(&buff_dst[n], (i - n));
	return (NULL);
}

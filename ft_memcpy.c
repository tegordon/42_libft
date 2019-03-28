/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/22 01:27:04 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/28 00:43:57 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	- Copies _len bytes from memory area _src to memory area _dst.
**
**	- Returns the original value of _dst.
*/

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*buff_dst;
	char	*buff_src;

	i = 0;
	buff_dst = (char *)dst;
	buff_src = (char *)src;
	while (i < len)
	{
		buff_dst[i] = buff_src[i];
		i++;
	}
	return (dst);
}

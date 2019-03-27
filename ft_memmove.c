/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 04:43:54 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/24 16:16:13 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	- Copies _len bytes from string _src to string _dst.
**
**  - The two strings may overlap; the copy is always done non-destructively.
**
**  - Returns the original value of _dst.
*/

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	if (src < dst)
	{
		while (len-- > 0)
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
	}
	else
		dst = ft_memcpy(dst, src, len);
	return ((unsigned char *)dst);
}

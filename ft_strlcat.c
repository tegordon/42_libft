/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 11:07:12 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/28 04:43:58 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	- Appends string _src to the end of _dst.
**
**  - Appends at most _dstsize (ft_strlen(dst) - 1) characters.
**
**	- then NUL-terminates, unless _dstsize is 0,
**  or the original _dst string was longer than _dstsize.
**
**  - Returns the initial length of _dst plus the length of _src.
*/

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i] && i < dstsize)
		i++;
	j = i;
	while (i + 1 < dstsize && src[i - j])
	{
		dst[i] = src[i - j];
		i++;
	}
	if (j < dstsize)
		dst[i] = '\0';
	return (j + ft_strlen(src));
}

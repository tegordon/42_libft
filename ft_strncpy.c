/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 02:35:00 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/24 19:02:37 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	- Copies the string pointed to by src,
**	including the terminating null byte (/0),
**	to the buffer pointed to by dest.
**
**	- At most n bytes of src are copied.
**
**	- If there is no null byte among the first n bytes of src,
**	the string placed in dest will not be null terminted.
**
**	- If the length of src is less than n,
**	strncpy writes additional null bytes to dest
**	to ensure that a total of n bytes are written.
*/

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t i;

	i = 0;
	while (src[i] && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
		dst[i++] = '\0';
	return (dst);
}

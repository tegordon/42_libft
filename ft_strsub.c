/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 07:14:14 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/26 05:31:35 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	- Allocates with malloc and returns a "fresh" substring from the string
**    given as argument.
**
**  - The substring begins at index _start and is size _len.
**
**  - If _start and _len aren't refering to a valid substring,
**    the behavior is undefined.
**
**  - If the allocation fails, the fxn returns NULL.
*/

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub_s;

	if (!s)
		return (NULL);
	sub_s = ft_strnew(len);
	if (!sub_s)
		return (NULL);
	i = 0;
	while (len-- && s[start])
		sub_s[i++] = s[start++];
	return (sub_s);
}

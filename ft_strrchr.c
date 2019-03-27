/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 01:51:04 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/24 19:12:07 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  - locates the last occurence of c (converted to char)
**	in a string pointed to by s.
**
**	- Terminating null character is considered part of the string;
**	so if c is '\0', the function locates the terminating '\0'.
**
**	- return a pointer to the located character, or NULL if the character
**	does not appear in the string.
*/

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	if (ft_strchr(s, c) == NULL)
		return (NULL);
	s += ft_strlen(s);
	while (*s != c)
		s--;
	return ((char *)s);
}

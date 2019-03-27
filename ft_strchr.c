/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 01:10:27 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/24 16:22:59 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  - locates the first occurence of c (converted to char)
**	in a string pointed to by s.
**
**	- Terminating null character is considered part of the string;
**	so if c is '\0', the function locates the terminating '\0'.
**
**	- return a pointer to the located character, or NULL if the character
**	does not appear in the string.
*/

#include "libft.h"

char		*ft_strchr(const char *s, int c)
{
	char	converted_c;

	converted_c = (char)c;
	while (*s && *s != converted_c)
		s++;
	if (*s == converted_c)
		return ((char *)s);
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 03:09:32 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/24 19:02:07 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	- Lexicographically compares the null-terminated strings _s1 and _s2.
**
**  - Compares not more than _len characters.
**
**	- For strings, not binary,
**	  so characters appearing after a '\0' are not compared.
**
**	- Returns an integer greater than, equal to, or less than 0,
**	  according as the string s1 is great than, equal to, or less than
**	  the string _s2.
*/

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t	i;

	i = 0;
	if (len != 0)
	{
		while (s1[i] && s2[i] && s1[i] == s2[i] && i < len - 1)
			i++;
		return (((unsigned char)s1[i]) - ((unsigned char)s2[i]));
	}
	return (0);
}

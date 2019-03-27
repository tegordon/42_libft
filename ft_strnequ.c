/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 07:04:05 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/24 19:05:23 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	- Lexicographical comparison between _s1 and _s2, up to _n characters,
**    or until a '\0' is reached.
**
**  - Returns 1(T) or 0(F), according to if the strings are identical or not.
*/

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 && s2)
		if (!(ft_strncmp(s1, s2, n)))
			return (1);
	return (0);
}

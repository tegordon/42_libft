/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 07:15:24 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/27 07:29:27 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Allocates with malloc(3) and returns an array of "fresh" strings
**   (all ending with '\0', including the array itself)
**   obtained by splitting _s using the character _c as a delimiter.
**   - If the allocation fails, the fxn returns NULL.
*/

#include "libft.h"

static int			ft_iswordbegin(char const *s, size_t i, char c)
{
	if (s[i])
	{
		if (i == 0)
			return (1);
		else
		{
			if (s[i - 1] == c)
				return (1);
		}
	}
	return (0);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**arr_s;
	size_t	i;
	size_t	k;
	size_t	j;

	if (!(k = ft_wordccount(s, c)))
		return (NULL);
	if (!(arr_s = (char **)ft_memalloc(sizeof(char *) * (k))))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (ft_iswordbegin(s, i, c))
		{
			k = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			if (!(arr_s[j++] = ft_strsub(s, k, (i - k))))
				return (NULL);
		}
	}
	return (arr_s);
}

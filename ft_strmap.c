/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 07:12:49 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/28 01:29:33 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Applies the fxn f() to each character of the string given as argument
**   to create a "fresh" new string with malloc(3)
**   resulting from the successive applications of f().
*/

#include "libft.h"

char			*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*new_s;

	if (!s)
		return (NULL);
	if (!(new_s = ft_strnew(ft_strlen(s))))
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_s[i] = f(s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}

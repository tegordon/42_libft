/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 07:13:20 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/24 18:59:27 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applies the fxn f() to each character of the string passed as argument
** by giving its index as first argument to create a "fresh" new string
** with malloc(3) resulting from the successive applications of f().
*/

#include "libft.h"

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*new_s;

	if (!s)
		return (NULL);
	new_s = ft_strnew(ft_strlen(s));
	if (!new_s)
		return (NULL);
	i = -1;
	while (s[++i])
		new_s[i] = f(i, s[i]);
	new_s[i] = '\0';
	return (new_s);
}

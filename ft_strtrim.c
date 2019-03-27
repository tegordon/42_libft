/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/24 08:15:04 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/24 19:44:34 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	- Allocates with malloc(3) and returns a copy of the string given as
**   argument without whitespaces at the beginning or at the end of the string.
**   ' ', '\n', and '\t'. If _s has no whitespaces at the beginning or at the
**   end, the fxn returns a copy of _s. If allocation fails, fxn returns NULL.
*/

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	char	*s_buff;
	char	*s_return;

	i = 0;
	j = ft_strlen(s);
	while (s[i] && ft_iswspace(s[i]))
		i++;
	s_buff = ft_strsub(s, (int)i, (j - i));
	if (!s_buff)
		return (NULL);
	ft_strrev(s_buff);
	i = 0;
	j = ft_strlen(s_buff);
	while (s_buff[i] && ft_iswspace(s_buff[i]))
		i++;
	ft_strrev(s_buff);
	s_return = ft_strsub(s_buff, 0, (j - i));
	free(s_buff);
	if (!s_return)
		return (NULL);
	return (s_return);
}

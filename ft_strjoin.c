/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 07:14:46 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/24 16:58:16 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Allocates with malloc(3) and returns a "fresh" string ending with '\0',
**   result of the concatenation of s1 and s2.
** - If the allocation fails, the fxn returns NULL.
*/

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;

	s3 = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!s3)
		return (NULL);
	ft_memcpy(s3, s1, strlen(s1));
	ft_strcat(s3, s2);
	return (s3);
}

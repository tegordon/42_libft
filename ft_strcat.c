/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/26 09:23:49 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/24 16:20:48 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	- appends a copy of the null-terminated string /s2 to the end of the
**  null-terminated string /s1, then adds a terminating '\0'.
**
**	- string /s1 must have sufficient space to hold the result.
*/

#include "libft.h"

char		*ft_strcat(char *s1, const char *s2)
{
	size_t i;
	size_t j;

	i = ft_strlen(s1);
	j = 0;
	while (s2[j])
		s1[i++] = s2[j++];
	s1[i] = '\0';
	return (s1);
}

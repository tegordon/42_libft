/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 14:12:27 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/27 07:17:54 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	- Allocates sufficient memory for a copy of the string _s1,
**  does the copy, and returns a pointer to it.
**
**  - If insufficient memory is available, NULL is returned.
*/

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*copy_s;
	size_t	i;

	if (!s1)
		return (NULL);
	i = ft_strlen(s1);
	if (!(copy_s = malloc(sizeof(char) * i)))
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		copy_s[i] = s1[i];
		i++;
	}
	copy_s[i] = '\0';
	return (copy_s);
}

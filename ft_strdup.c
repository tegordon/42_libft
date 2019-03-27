/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 14:12:27 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/24 20:11:46 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	- Allocates sufficient memory for a copy of the string _s1,
**  does the copy, and returns a pointer to it.
**
**  - If insufficient memory is available, NULL is returned
*/

#include "libft.h"

char		*ft_strdup(char *src)
{
	char	*copy_s;
	size_t	i;

	i = ft_strlen(src);
	copy_s = malloc(i + 1);
	if (!copy_s)
		return (NULL);
	i = 0;
	while (src[i++] != '\0')
		copy_s[i] = src[i];
	copy_s[i] = '\0';
	return (copy_s);
}

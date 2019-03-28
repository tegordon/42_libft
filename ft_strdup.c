/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 14:12:27 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/28 04:18:28 by tegordon         ###   ########.fr       */
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

	i = (ft_strlen(s1)) + 1;
	if (!(copy_s = (char *)malloc(sizeof(char) * i)))
		return (NULL);
	ft_strcpy(copy_s, s1);
	return (copy_s);
}

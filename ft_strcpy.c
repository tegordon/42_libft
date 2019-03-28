/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/10 05:59:48 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/28 01:47:48 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  - Copies strings
*/

#include "libft.h"

char		*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/23 19:54:06 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/24 19:25:38 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Reverses a string.
*/

#include "libft.h"

char		*ft_strrev(char *str)
{
	size_t	i;
	size_t	size;
	char	tmp_c;

	i = 0;
	size = ft_strlen(str) - 1;
	while (i < size)
	{
		tmp_c = str[size];
		str[size] = str[i];
		str[i] = tmp_c;
		i++;
		size--;
	}
	return (str);
}

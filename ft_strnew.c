/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 07:12:14 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/24 19:09:21 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	 Allocates with malloc(3) and returns a "fresh" string ending with '\0'.
*/

#include "libft.h"

char		*ft_strnew(size_t size)
{
	char	*str;

	str = (char *)ft_memalloc(size + 1);
	return (str);
}

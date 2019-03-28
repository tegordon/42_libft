/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/03 03:31:55 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/27 07:38:52 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	- Allocates with malloc and returns a "fresh" memory area.
**
**  - The memory allocated is initialized to 0.
**
**  - If the allocation fails, the fxn returns NULL.
*/

#include "libft.h"

void		*ft_memalloc(size_t size)
{
	void	*buff;

	buff = malloc(size);
	if (!buff)
		return (NULL);
	ft_bzero(buff, size);
	return (buff);
}

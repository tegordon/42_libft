/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 07:03:15 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/24 16:15:37 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	  Takes as a parameter the address of a memory area
**    that needs to be freed with free(3),
**    then puts the pointer to NULL.
*/

#include "libft.h"

void		ft_memdel(void **ap)
{
	if (ap)
	{
		free(*ap);
		*ap = NULL;
	}
}

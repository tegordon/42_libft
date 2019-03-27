/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/27 06:17:49 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/24 16:52:33 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  - Takes as a parameter the address of a string that needs to be freed
**    with free(3), then sets its pointer to NULL.
*/

#include "libft.h"

void		ft_strdel(char **as)
{
	if (as && *as)
	{
		free(*as);
		*as = NULL;
	}
}

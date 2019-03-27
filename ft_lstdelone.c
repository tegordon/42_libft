/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/10 03:22:46 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/24 13:32:03 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Takes as a parameter a link's pointer address and frees the memory of the
**   link's content using the fxn del() given as a parameter, then frees
**   the link's memory using free(3).
**   - The memory of _next must not be freed under any circumstance.
**   - Pointer to the link that was just freed must be set to NULL.
*/

#include "libft.h"

void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	if (!alst || !*alst || !del)
		return ;
	del((*alst)->content, (*alst)->content_size);
	ft_memdel((void **)alst);
}

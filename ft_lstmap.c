/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/10 03:36:31 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/24 13:34:01 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Iterates a list _lst and applies the fxn f() to eeach link to create a
**   "fresh" list using malloc(3) from the successive applications of f().
**   - If the allocation fails, the fxn returns NULL.
*/

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*f_lst;
	t_list	*i;

	if (!lst)
		return (NULL);
	i = ft_lstnew(NULL, 0);
	if (!i)
		return (NULL);
	i = f(lst);
	f_lst = i;
	while (lst->next)
	{
		lst = lst->next;
		i->next = f(lst);
		i = i->next;
	}
	return (f_lst);
}

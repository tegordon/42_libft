/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/10 03:16:16 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/26 01:45:32 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**   - Allocates with malloc and returns a "fresh" link.
**   - The variables _content and _content_size of the new link are
**   initialized by copy of the parameters of the function.
**   - If the parameter _content is nul, the variable _content is initialized
**   to NULL and the variable _content_size is initialized to 0, even if the
**   parameter _content_size isn't.
**   - The variable _next is initialized to NULL.
**   - If the allocation fails, the function returns NULL.
*/

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*n_lst;

	n_lst = (t_list *)malloc(sizeof(t_list));
	if (!n_lst)
		return (NULL);
	if (!content)
	{
		n_lst->content = 0;
		n_lst->content_size = 0;
	}
	else
	{
		n_lst->content = malloc(content_size);
		if (!(n_lst->content))
		{
			ft_memdel((void **)&n_lst);
			return (NULL);
		}
		ft_memcpy(n_lst->content, content, content_size);
		n_lst->content_size = content_size;
	}
	n_lst->next = NULL;
	return (n_lst);
}

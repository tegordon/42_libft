/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 09:21:38 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/24 13:12:26 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Writes zeroes to a byte string.
**
** - Writes _n zeroed bytes to the string _s.
**
** - If _n is zero, bzero does nothing.
*/

#include "libft.h"

void		ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 17:42:48 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/28 01:10:03 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  - Outputs the string _s to the file descriptor _fd.
*/

#include "libft.h"

void		ft_putstr_fd(char const *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 17:42:48 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/24 16:19:44 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  - Outputs the string _s to the file descriptor _fd.
*/

#include "libft.h"

void		ft_putstr_fd(char const *s, int fd)
{
	while (s && *s)
		ft_putchar_fd(*s++, fd);
}

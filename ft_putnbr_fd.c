/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 17:44:43 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/28 05:34:53 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	- Outputs the integer _n to the file descriptor _fd.
*/

#include "libft.h"

void		ft_putnbr_fd(int n, int fd)
{
	char	*s;

	if (!(s = ft_itoa(n)))
		return ;
	ft_putstr_fd(s, fd);
	free(s);
}

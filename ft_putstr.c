/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 07:07:10 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/24 16:19:59 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Outputs the string _s to the standard output
*/

#include "libft.h"

void		ft_putstr(char const *s)
{
	while (s && *s)
		ft_putchar(*s++);
}

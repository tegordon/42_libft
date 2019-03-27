/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/06 07:06:36 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/24 16:18:47 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	- Outputs the string _s to the standard output followed by a '\n'.
*/

#include "libft.h"

void		ft_putendl(char const *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}

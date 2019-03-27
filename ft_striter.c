/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 10:52:10 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/24 16:55:38 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  - Applies the fxn _f to each character of the string passed as argument.
**  - Each character is passed by address to _f to be modified if necessary.
*/

#include "libft.h"

void		ft_striter(char *s, void (*f)(char *))
{
	while (s && f && *s)
	{
		f(s);
		s++;
	}
}

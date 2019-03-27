/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 11:40:05 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/24 16:56:44 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  - Applies the function f to each character of the string passed as argument,
**    and passing its index as first argument.
**
**  - Each character is passed by address to f to be modified if necessary.
*/

#include "libft.h"

void			ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	while (s[i] && f)
	{
		f(i, &s[i]);
		i++;
	}
}

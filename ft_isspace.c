/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 19:38:42 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/24 13:24:47 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Test for whether a character is space.
*/

#include "libft.h"

int		ft_isspace(int c)
{
	return (c == ' ' || c == '\t' || c == '\n' || \
			c == '\v' || c == '\r' || c == '\f');
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswspace.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/10 04:32:28 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/24 13:25:31 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Test for whether input character is white space.
*/

#include "libft.h"

int		ft_iswspace(int c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

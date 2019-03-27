/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 10:27:59 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/24 13:20:15 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - TRUE/FALSE test for any printing character, including space.
*/

#include "libft.h"

int		ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

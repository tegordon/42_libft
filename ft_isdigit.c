/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 10:58:13 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/24 13:16:05 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - TRUE/FALSE test for a decimal digit character, 0 - 9 only!
*/

#include "libft.h"

int		ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

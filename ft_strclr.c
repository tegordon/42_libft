/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 02:09:41 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/24 16:23:28 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**  - Sets every character of the string to the value '\0'.
*/

#include "libft.h"

void		ft_strclr(char *s)
{
	if (s)
		ft_bzero(s, ft_strlen(s));
}

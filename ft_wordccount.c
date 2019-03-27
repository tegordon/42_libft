/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordccount.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 18:55:03 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/26 06:58:46 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Counts words in a string given as argument, using character _delim_c and
**	 string start and end as delimeters. If any words exist, the count is
**	 returned with +1 added for null.
*/

#include "libft.h"
#include <stdio.h>

int		ft_wordccount(char const *s, char delim_c)
{
	int	count;
	int is_word;

	count = 0;
	is_word = 0;
	while (*s)
		if (*s == delim_c)
		{
			is_word = 0;
			while (*s == delim_c)
				s++;
		}
		else
		{
			if (!is_word)
			{
				is_word = 1;
				count++;
			}
			s++;
		}
	if (count > 0)
		count += 1;
	return (count);
}

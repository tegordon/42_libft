/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordccount.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 18:55:03 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/28 09:40:11 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - Counts words in a string given as argument, using character _delim_c and
**	 string start and end as delimeters.
*/

#include "libft.h"

int		ft_wordccount(char const *s, char delim_c)
{
	int	count;
	int is_word;

	if (!s)
		return (0);
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
	return (count ? count : 1);
}

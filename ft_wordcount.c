/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tegordon <tegordon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/10 04:33:47 by tegordon          #+#    #+#             */
/*   Updated: 2019/03/24 19:51:03 by tegordon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** - In a string, counts strings delimited by ends of the string & whitespace.
*/

#include "libft.h"

int			ft_wordcount(char *s)
{
	int	c;
	int	is_word;

	c = 0;
	is_word = 0;
	while (*s)
	{
		if (ft_iswspace(*s))
		{
			is_word = 0;
			while (ft_iswspace(*s))
				s++;
		}
		else
		{
			if (!is_word)
			{
				is_word = 1;
				c++;
			}
			s++;
		}
	}
	return (c);
}

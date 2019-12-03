/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 10:41:11 by dpuente-          #+#    #+#             */
/*   Updated: 2019/12/03 13:33:05 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*introduce(int start, int end, char *strtrim)
{
	int		newcount;
	char	*finaltext;

	finaltext = malloc((((strlen(strtrim) + 1) - start) -
	(strlen(strtrim) - end)));
	newcount = 0;
	while (start < end)
	{
		finaltext[newcount] = strtrim[start];
		newcount++;
		start++;
	}
	finaltext[newcount] = '\0';
	return (finaltext);
}

char	*function(char *strtrim, char *strefer
, unsigned long trelong, int end)
{
	int				n;
	unsigned long	p;
	int				start;

	start = 0;
	n = 0;
	while (strefer[n] != '\0')
	{
		p = 0;
		while (p < trelong)
		{
			if (strtrim[p] == strefer[n])
				start++;
			p++;
		}
		p = strlen(strtrim);
		while (p >= (strlen(strtrim) - trelong))
		{
			if (strtrim[p] == strefer[n])
				end--;
			p--;
		}
		n++;
	}
	return (introduce(start, end, strtrim));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char				*strtrim;
	char				*strefer;
	unsigned long		trelong;
	int					end;

	strtrim = (char *)s1;
	strefer = (char *)set;
	end = strlen(strtrim);
	trelong = strlen(strefer);
	return (function(strtrim, strefer, trelong, end));
}

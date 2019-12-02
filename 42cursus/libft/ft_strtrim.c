/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 10:41:11 by dpuente-          #+#    #+#             */
/*   Updated: 2019/12/02 17:15:05 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*introduce(int start, int end, char *finaltext, char *strtrim)
{
	while (start < end)
	{
		finaltext[start] = strtrim[start];
		start++;
	}
	finaltext[start] = '\0';
	return (finaltext);
}

char	*function(char *strtrim, char *strefer
, char *finaltext, int trelong)
{
	int n;
	int p;
	int start;
	int end;

	end = ft_strlen(strtrim);
	start = 0;
	n = 0;
	p = 0;
	while (strefer[n++] != '\0')
	{
		while (p++ < trelong)
		{
			if (strtrim[p] == strefer[n])
				start++;
		}
		p = ft_strlen(strtrim);
		while (p-- > (p - trelong))
		{
			if (strtrim[p] == strefer[n])
				end--;
		}
		introduce(start, end, finaltext = malloc(
			(ft_strlen(strtrim) + 1) - start - end), strtrim);
	}
	return (introduce(start, end, finaltext, strtrim));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*strtrim;
	char	*strefer;
	char	*finaltext;
	int		trelong;

	strtrim = (char *)s1;
	strefer = (char *)set;
	trelong = ft_strlen(strefer);
	return (function(strtrim, strefer, finaltext, trelong));
}

int		main(void)
{
	printf("%s", ft_strtrim("hola que tal laoh", "hola"));
}

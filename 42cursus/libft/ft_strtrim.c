/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 15:23:19 by davyd11           #+#    #+#             */
/*   Updated: 2019/11/28 12:43:51 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*introduce(int start, int end, char *finaltext, char *strtrim)
{
	while (start < end)
	{
		finaltext[start] = strtrim[start];
		start++;
	}
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
	while (strefer[n] != '\0')
	{
		while (p < trelong)
		{
			if (strtrim[p++] == strefer[n])
				start++;
		}
		p = ft_strlen(strtrim);
		while (p > (p - trelong))
		{
			if (strtrim[p--] == strefer[n])
				end--;
		}
		n++;
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
	finaltext = malloc(ft_strlen(strtrim) + 1);
	trelong = ft_strlen(strefer);
	return (function(strtrim, strefer, finaltext, trelong));
}

int		main(void)
{
	printf("%s", ft_strtrim("hola que tal laoh", "hola"));
}

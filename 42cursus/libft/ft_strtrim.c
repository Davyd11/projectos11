/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 15:23:19 by davyd11           #+#    #+#             */
/*   Updated: 2019/11/21 11:36:20 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	function(char *strtrim, char *strefer
, char *finaltext)
{
	int j;
	int n;
	int p;

	j = 0;
	n = 0;
	p = 0;
	while (strtrim[n] != '\0')
	{
		while (strefer[p] != '\0')
		{
			if (strefer[p] == strtrim[n])
				n++;
			p++;
		}
		p = 0;
		finaltext[j] = strtrim[n];
		j++;
		n++;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char *strtrim;
	char *strefer;
	char *finaltext;

	strtrim = (char *)s1;
	strefer = (char *)set;
	finaltext = malloc(ft_strlen(strtrim) + 1);
	function(strtrim, strefer, finaltext);
	return (finaltext);
}

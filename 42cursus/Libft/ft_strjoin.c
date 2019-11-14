/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyd11 <davyd11@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 12:49:29 by davyd11           #+#    #+#             */
/*   Updated: 2019/11/13 14:59:30 by davyd11          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <stdlib.h>
# include "ft_strlen.c"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int n;
	int p;
	int size;
	char *join;


	p = 0;
	n = 0;
	if (!(size = ft_strlen(s1) + ft_strlen(s2)))
		return (0);
	join = (char*)malloc(size + 1);
	while (s1[n] != '\0')
	{
		join[n] = s1[n];
		n++;
	}
	while (s2[p] != '\0')
	{
		join[n] = s2[p];
		p++;
		n++;
	}
	join[n] = '\0';
	return (join);
}

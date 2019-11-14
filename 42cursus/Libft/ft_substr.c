/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyd11 <davyd11@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 12:17:49 by davyd11           #+#    #+#             */
/*   Updated: 2019/11/13 12:22:14 by davyd11          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *src;
	int i;
	int n;

	n = 0;
	while (s[n] != '\0')
		n++;
	if (!(src = malloc(sizeof(char) * (n + 1))))
		return (NULL);
	i = 0;
	while (start <= len)
	{
		src[i] = s[start];
		i++;
		start++;
	}
	src[i] = '\0';
	return (src);
}

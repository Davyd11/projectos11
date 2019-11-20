/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 12:17:49 by davyd11           #+#    #+#             */
/*   Updated: 2019/11/20 16:39:23 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*src;
	int		i;
	size_t	n;

	n = 0;
	if (!s)
		return (NULL);
	while (s[n] != '\0')
		n++;
	if (len >= n)
		len = n;
	if (!(src = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	len = start + len;
	while (start < len)
	{
		src[i] = s[start];
		i++;
		start++;
	}
	src[i] = '\0';
	return (src);
}

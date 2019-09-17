/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 18:40:12 by dpuente-          #+#    #+#             */
/*   Updated: 2019/09/17 18:48:24 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int numb;

	numb = 0;
	while (numb < n)
	{
		*dest = *src;
		*dest++;
		*src++;
		numb++;
	}
	*dest = '\0';
	return (dest);
}

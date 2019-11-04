/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 16:56:29 by dpuente-          #+#    #+#             */
/*   Updated: 2019/09/22 16:36:00 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	number;
	unsigned int	i;

	number = 0;
	while (src[number] != '\0')
	{
		++number;
	}
	i = 0;
	while (src[i] != '\0' && i < (size - 1) && size > 0)
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (size);
 }

int main ()
{
	char c[] = "hola";
	char j[] = "pepe";
	int i = 0;
	printf("%u\n %s\n",ft_strlcpy(c, j, i), c);

}

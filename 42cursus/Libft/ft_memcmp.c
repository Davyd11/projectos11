/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 10:49:13 by dpuente-          #+#    #+#             */
/*   Updated: 2019/11/12 11:00:10 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	int	resul;
	int	p;
	unsigned char *s1;
	unsigned char *s2;

	p = 0;
	resul = 0;
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;

	while (n--)
	{
		resul += ((s1[p]) - (s2[p]));
		p++;
	}
	return (resul);
}

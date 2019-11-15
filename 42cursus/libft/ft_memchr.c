/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyd11 <davyd11@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 10:48:31 by dpuente-          #+#    #+#             */
/*   Updated: 2019/11/15 15:46:45 by davyd11          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*ptr;
	unsigned char	c2;
	int				i;

	i = 0;
	ptr = (char*)s;
	c2 = (unsigned char)c;
	while (n--)
	{
		if (ptr[i] == c2)
			return (ptr + i);
		i++;
	}
	return (NULL);
}
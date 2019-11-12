/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 09:00:02 by dpuente-          #+#    #+#             */
/*   Updated: 2019/11/12 11:04:19 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int j;
	char	*ptr;

	j = 0;
	if (b == NULL)
	{
		return (NULL);
	}

	ptr = b;
	while (len-- > 0)
	{
		*ptr = c;
		ptr++;
	}
	return (b);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyd11 <davyd11@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 09:00:02 by dpuente-          #+#    #+#             */
/*   Updated: 2019/11/15 15:07:41 by davyd11          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*ptr;

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

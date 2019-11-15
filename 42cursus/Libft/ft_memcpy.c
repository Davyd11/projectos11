/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 11:00:26 by dpuente-          #+#    #+#             */
/*   Updated: 2019/11/15 12:53:07 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char		*ptr;
	const char	*rtp;

	ptr = dest;
	rtp = src;
	while (dest++ != '\0')
	{
		*ptr = *rtp;
		ptr++;
		rtp++;
	}
	return (dest);
}

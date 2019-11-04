/*# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_memset                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpuente- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/04 11:36:50 by dpuente-          #+#    #+#              #
/*   Updated: 2019/11/04 12:48:22 by dpuente-         ###   ########.fr       */
/*#                                                                              #
# **************************************************************************** # */
#include <stdio.h>

void	*ft_memset(void *b ,int c, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char*)b;
	while (len-- > 0)
	{
		*(ptr++) = (unsigned char)c;
	}
	return(b);
}
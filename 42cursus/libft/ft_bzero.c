/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 09:23:37 by dpuente-          #+#    #+#             */
/*   Updated: 2019/11/12 10:39:31 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_bzero(void *b, size_t len)
{
	char	*ptr;

	ptr = b;
	while (len-- > 0)
	{
		*ptr = 0;
		ptr++;
	}
	return (b);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 10:41:11 by dpuente-          #+#    #+#             */
/*   Updated: 2019/11/22 16:54:59 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;
	size_t	i;

	i = 0;
	if (!nmemb || !size)
		return (NULL);
	if (!(result = malloc((size * nmemb) + 1)))
		return (NULL);
	while (i < nmemb)
	{
		((char*)result)[i] = 0;
		i++;
	}
	((char*)result)[nmemb] = '\0';
	return (result);
}

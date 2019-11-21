/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 18:40:12 by dpuente-          #+#    #+#             */
/*   Updated: 2019/09/22 14:00:27 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int numb;

	numb = 0;
	while (src[numb] != '\0' && numb < n)
	{
		dest[numb] = src[numb];
		numb++;
	}
	while (numb < n)
	{
		dest[numb] = '\0';
		numb++;
	}
	return (dest);
}

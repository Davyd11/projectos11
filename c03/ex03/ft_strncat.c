/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 21:45:36 by dpuente-          #+#    #+#             */
/*   Updated: 2019/09/22 18:31:46 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int n;
	unsigned int j;
	unsigned int p;

	p = 0;
	n = 0;
	j = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	p = n;
	while (src[j] != '\0' && j < nb)
	{
		dest[p] = src[j];
		p++;
		j++;
	}
	dest[p] = '\0';
	return (dest);
}

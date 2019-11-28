/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 20:08:31 by dpuente-          #+#    #+#             */
/*   Updated: 2019/09/18 20:57:24 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int n;
	int j;

	n = 0;
	j = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	while (src[j] != '\0')
	{
		dest[n] = src[j];
		n++;
		j++;
	}
	dest[n] = '\0';
	return (dest);
}
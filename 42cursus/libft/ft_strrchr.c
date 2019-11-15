/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyd11 <davyd11@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 11:08:11 by dpuente-          #+#    #+#             */
/*   Updated: 2019/11/15 16:13:19 by davyd11          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
	int n;
	char *word;

	n = 0;
	word = (char*)str;
	while (word[n] != '\0')
	{
		n++;
	}
	while (word[n] != c)
	{
		if (n <= 0)
			return (0);
		n--;
	}
	return (word + n);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 10:41:11 by dpuente-          #+#    #+#             */
/*   Updated: 2019/12/12 15:54:46 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		beginning(char const *s1, char const *set)
{
	int i;
	int j;
	int cont1;
	int setnb;

	setnb = 1;
	i = 0;
	j = 0;
	cont1 = 0;
	while (s1[i] != '\0' && setnb == 1)
	{
		setnb = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
			{
				cont1++;
				setnb = 1;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (cont1);
}

int		final(char const *s1, char const *set)
{
	int i;
	int j;
	int cont2;
	int setnb;

	setnb = 1;
	i = ft_strlen(s1) - 1;
	j = ft_strlen(set) - 1;
	cont2 = 0;
	while (i >= 0 && setnb == 1)
	{
		setnb = 0;
		while (j >= 0)
		{
			if (s1[i] == set[j])
			{
				cont2++;
				setnb = 1;
			}
			j--;
		}
		j = ft_strlen(set) - 1;
		i--;
	}
	return (cont2);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	slen;
	size_t	start;
	size_t	i;

	i = 0;
	start = 0;
	if (!s1)
		return (NULL);
	start = beginning(s1, set);
	if (start > (ft_strlen(s1) - final(s1, set)))
		return (ft_strdup(""));
	slen = ft_strlen(s1) - final(s1, set) - beginning(s1, set);
	return (ft_substr(s1, start, slen));
}

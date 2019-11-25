/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 12:14:52 by dpuente-          #+#    #+#             */
/*   Updated: 2019/11/25 17:18:12 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int		nletters(char const *s, char c, int n)
{
	int letters;

	letters = 0;
	while (s[n] != c)
		letters++;
	return (letters);
}

char	isertwords(char const *s, char c, int n, char **finaltext)
{
	int count;

	count = 0;
	n = 0;
	while (s[n] != '\0')
	{
		if ((s[n] == c) && (s[n + 1] != c && s[n + 1] != '\0'))
		{
			finaltext[count] = malloc(sizeof(char) * (nletters(s, c, n) + 1));
		}
		else if (s[n] != c && n == 0)
			finaltext[count] = malloc(sizeof(char) * (nletters(s, c, n) + 1));
		n++;
	}
}

void	nwords(char const *s, char c)
{
	int		n;
	int		count;
	char	**finaltext;

	count = 0;
	n = 0;
	while (s[n] != '\0')
	{
		if ((s[n] == c) && (s[n + 1] != c && s[n + 1] != '\0'))
		{
			count++;
		}
		else if (s[n] != c && n == 0)
			count++;
		n++;
	}
	finaltext = malloc(sizeof(char*) * (count));
	isertwords(s, c, n, finaltext);
}

char	**ft_split(char const *s, char c)
{
	nwords(s, c);
}

int		main(void)
{
	printf("%s", ft_split("  hola que tal estamos,  por  aqui  ", ' '));
}

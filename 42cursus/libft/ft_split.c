/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/25 12:14:52 by dpuente-          #+#    #+#             */
/*   Updated: 2019/11/26 17:31:06 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static void	introduce(char const *s, char c, int count, char **finaltext, int n)
{
	int letter;

	letter = 0;
	if (s[n] == c)
		n++;
	while (s[n] != c)
	{
		finaltext[count][letter] = s[n];
		letter++;
		n++;
	}
	finaltext[count][letter] = '\0';
}

static int		nletters(char const *s, char c, int n)
{
	int letters;

	letters = 0;
	if (s[n] == c)
		n++;
	while (s[n + 1] != c)
	{
		letters++;
		n++;
	}
	return (letters);
}

static char	**isertwords(char const *s, char c, int n, char **finaltext)
{
	int count;

	count = 0;
	n = 0;
	while (s[n] != '\0')
	{
		if ((s[n] == c) && (s[n + 1] != c && s[n + 1] != '\0'))
		{
			finaltext[count] = malloc(sizeof(char) * (nletters(s, c, n) + 1));
			introduce(s, c, count, finaltext, n);
			count++;
		}
		else if (s[n] != c && n == 0)
		{
			finaltext[count] = malloc(sizeof(char) * (nletters(s, c, n) + 1));
			introduce(s, c, count, finaltext, n);
			count++;
		}
		n++;
	}
	return (finaltext);
}

char	**ft_split(char const *s, char c)
{
	int		n;
	int		count;
	char	**finaltext;
	int		content;

	content = 0;
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
		else if (s[n] != c)
			content++;
		n++;
	}
	if (content <= 0)
		return (NULL);
	finaltext = malloc(sizeof(char*) * (count));
	return (isertwords(s, c, n, finaltext));
}

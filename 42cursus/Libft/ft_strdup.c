/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 11:28:28 by dpuente-          #+#    #+#             */
/*   Updated: 2019/11/12 16:38:17 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

<<<<<<< HEAD
char	*ft_strdup(char *src)
{
	char	*new;
	int		i;
	int		size;

	size = 0;
	while (src[size]) /* Mesure the string */
		++size;
	if (!(new = malloc(sizeof(char) * (size + 1)))) /* WHY THE  EXCLAMATION SIGN*/
		return (NULL);
	i = 0;
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

int main()
{
	char source[] = "Hola David";

	char* target = ft_strdup(source);
	printf("%s", target);
}
/* Explanation: strdup just reserve a espace in memory 
 but a the same time it asign a value to that memory it reserved 
 previusly*/
=======
int		lens(const char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}

char	*strdup(const char *s)
{
	char *text;

	text = malloc(lens(s) + 1);
	if (text = NULL)
		return (NULL);
	ft_strcpy(text, s);
	return (text);
}
>>>>>>> 3ea461fabb11b8a6d10c84ce2e671d208be38eb4

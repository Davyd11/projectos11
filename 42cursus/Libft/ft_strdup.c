/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 11:28:28 by dpuente-          #+#    #+#             */
/*   Updated: 2019/11/12 11:38:29 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	lens(const char *s)
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

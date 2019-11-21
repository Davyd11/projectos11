/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 19:58:27 by dpuente-          #+#    #+#             */
/*   Updated: 2019/09/24 20:05:49 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int num(char **text)
{
	int n;

	n = 0;
	while(text[n] != '\0')
	{
		n++;
	}
	return (n);
}
int main(int c, char **text)
{
	int x;

	x = (num(text)) - 1;
	while (x > 0)
	{
		c = 0;
		while(text[x][c] != '\0')
		{
			write(1, &(text[x][c]), 1);
			c++;
		}
		write(1, "\n", 1);
		x--;
	}
	return (0);
}

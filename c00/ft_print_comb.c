/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 10:40:53 by dpuente-          #+#    #+#             */
/*   Updated: 2019/09/09 10:54:30 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void con(i, j, k)
{
	if (i == 7 && j == 8 && k == 9)
	{

	}
	else
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	bucle(i, j, k)
{
	char* n;

	n = "0123456789";

	while (i <= 9)
	{
		j = i + 1;
		while (j <= 9)
		{
			k = j + 1;
			while (k <= 9)
			{
				write(1, &n[i], 1);
				write(1, &n[j], 1);
				write(1, &n[k], 1);
				con(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
	
}

void	ft_print_numbers()
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	bucle (i, j, k);
}

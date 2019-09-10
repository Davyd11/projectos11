/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 10:45:34 by dpuente-          #+#    #+#             */
/*   Updated: 2019/09/10 16:28:03 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	printnumb(int a1, int a2, int b1, int b2)
{
	char*n;

	n = "0123456789";
	write(1, &n[a1], 1);
	write(1, &n[a2], 1);
	write(1, " ", 1);
	write(1, &n[b1], 1);
	write(1, &n[b2], 1);
	if (a1 == 9 && a2 == 8)
	{
		write(1, " ", 0);
	}
	else
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}

void	seleccion(int a1, int a2, int b1, int b2)
{
	int par1;
	int par2;

	par1 = a1 * 10 + a2;
	par2 = b1 * 10 + b2;
	if (par1 < par2)
	{
		printnumb(a1, a2, b1, b2);
	}
}

void	bucle(int a1, int a2, int b1, int b2)
{
	while (a1 <= 9)
	{
		while (a2 <= 9)
		{
			while (b1 <= 9)
			{
				b2 = b1;
				seleccion(a1, a2, b1, b2);
				b2 = b1 + 1;
				while (b2 <= 9)
				{
					seleccion(a1, a2, b1, b2);
					b2++;
				}
				b1++;
			}
			a2++;
			b1 = 0;
		}
		a1++;
		a2 = 0;
	}
}

void	ft_print_comb2(void)
{
	int a1;
	int a2;
	int b2;
	int b1;

	a1 = 0;
	a2 = 0;
	b1 = 0;
	b2 = 0;
	bucle(a1, a2, b1, b2);
}

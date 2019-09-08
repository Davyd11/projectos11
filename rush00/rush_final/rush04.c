/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 11:49:00 by dpuente-          #+#    #+#             */
/*   Updated: 2019/09/08 15:32:41 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	lateral(int x, int y, int mid, int mide)
{
	while (mid < y - 2 && y > 1)
	{
		ft_putchar('\n');
		ft_putchar('B');
		while (mide < x - 2)
		{
			ft_putchar(' ');
			mid_++;
		}
		if (x > 1)
		{
			ft_putchar('B');
		}
		mid_ = 0;
		mid++;
	}
}

void	suelo(int y, int base, int x)
{
	if (y > 1)
	{
		ft_putchar('\n');
		ft_putchar('C');
		while (base < x - 2 && y > 1)
		{
			ft_putchar('B');
			base++;
		}
		if (y > 1 && x > 1)
		{
			ft_putchar('A');
		}
	}
}

void	tapa(int x, int top)
{
	while (top < x - 2 && x > 1)
	{
		ft_putchar('B');
		top++;
	}
	if (x > 1)
	{
		ft_putchar('C');
	}
}

void	rush(int x, int y)
{
	int top;
	int mid;
	int base;
	int mide;

	ft_putchar('A');
	tapa(x, top);
	lateral(x, y, mid, mide);
	suelo(y, base, x);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 11:49:00 by dpuente-          #+#    #+#             */
/*   Updated: 2019/09/08 16:42:33 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	lateral(int x, int y, int mid, int mide)
{
	while (mid < y - 2 && y > 1)
	{
		ft_putchar('\n');
		ft_putchar('*');
		while (mide < x - 2)
		{
			ft_putchar(' ');
			mide++;
		}
		if (x > 1)
		{
			ft_putchar('*');
		}
		mide = 0;
		mid++;
	}
}

void	suelo(int y, int base, int x)
{
	if (y > 1)
	{
		ft_putchar('\n');
		ft_putchar(92);
		while (base < x - 2 && y > 1)
		{
			ft_putchar('*');
			base++;
		}
		if (y > 1 && x > 1)
		{
			ft_putchar('/');
		}
	}
}

void	tapa(int x, int top)
{
	while (top < x - 2 && x > 1)
	{
		ft_putchar('*');
		top++;
	}
	if (x > 1)
	{
		ft_putchar(92);
	}
}

void	rush(int x, int y)
{
	int top;
	int mid;
	int base;
	int mide;

	top = 0;
	mid = 0;
	base = 0;
	mide = 0;
	if (x > 0 || y > 0)
	{
		ft_putchar('/');
		tapa(x, top);
		lateral(x, y, mid, mide);
		suelo(y, base, x);
	}
}

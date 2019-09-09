/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 11:49:00 by dpuente-          #+#    #+#             */
/*   Updated: 2019/09/08 13:10:00 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar (char c);//declaracion de funccion de programa ft_putchar (al compilar los programas en uno funcionara la llamada a la funcion)

int top;
int mid;
int mid_;
int base;

void	 lateral(x, y, mid, mid_)//seccion del medio entre la parte de arriba y ela base del ccuadrado 
{
	while (mid < y-2 && y > 1)
	{
		ft_putchar('\n');
		ft_putchar('B');
		while(mid_ < x - 2)
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

void	suelo(y, base, x)//base del cuadrado 
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

void tapa (x, top) //parte de arriba excepto la primarera A de la esquina 
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

void rush(x, y)
{
	if (x > 0 || y > 0) //no escribe nada si no hay valores de entrada 
	{
		ft_putchar('A');
		tapa(x, top);
		lateral(x, y, mid, mid_);
		suelo(y, base, x);
	}
	
}
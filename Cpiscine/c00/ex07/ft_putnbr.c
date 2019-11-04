/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 16:38:39 by dpuente-          #+#    #+#             */
/*   Updated: 2019/09/10 19:41:38 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	bucle(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		bucle(nb * (-1));
	}
	else
	{
		if (nb >= 10)
		{
			bucle(nb / 10);
		}
		ft_putchar((nb % 10) + '0');
	}
}

void	ft_putnbr(int nb)
{
	bucle(nb);
}

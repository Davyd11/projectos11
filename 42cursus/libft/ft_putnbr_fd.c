/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 16:38:39 by dpuente-          #+#    #+#             */
/*   Updated: 2019/11/20 11:54:06 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	bucle(int nb, int fd)
{
	if (nb < 0)
	{
		ft_putchar('-', fd);
		bucle(nb * (-1), fd);
	}
	else
	{
		if (nb >= 10)
		{
			bucle(nb / 10, fd);
		}
		ft_putchar((nb % 10) + '0', fd);
	}
}

void	ft_putnbr_fd(int nb, int fd)
{
	bucle(nb, fd);
}

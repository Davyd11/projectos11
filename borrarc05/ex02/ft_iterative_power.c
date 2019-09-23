/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 19:54:30 by dpuente-          #+#    #+#             */
/*   Updated: 2019/09/23 20:02:56 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int n;

	n = 1;
	if (power == 0)
		return (1);
	if (nb == 0)
		return (0);
	while (power >= 1)
	{
		n = n * nb;
		power--;
	}
	return (n);
}

int main()
{
	printf("%d",ft_iterative_power(2, 6));
}

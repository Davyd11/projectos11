/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 15:20:17 by dpuente-          #+#    #+#             */
/*   Updated: 2019/09/24 19:23:53 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int c;

	c = nb;
	c = 1;
	while (nb >= 1)
	{
		c = c * nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (c);
}

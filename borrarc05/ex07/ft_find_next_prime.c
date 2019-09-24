/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 16:29:42 by dpuente-          #+#    #+#             */
/*   Updated: 2019/09/24 17:49:02 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int number;
	int resul;

	resul = 0;
	number = 2;
	if (nb == 1 || nb < 0)
		return (0);
	else if (nb > 0)
		while (number != nb)
		{
			resul = nb % number;
			if (resul == 0)
				return (0);
			number++;
		}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 11:36:43 by dpuente-          #+#    #+#             */
/*   Updated: 2019/09/24 12:33:01 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int count;

	if (power < 0)
		return (0);
	if (power > 0)
	{
		count = nb * ft_recursive_power(nb, power - 1);
		return (count);
	}
	else
		return (1);
}

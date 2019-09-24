/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 15:42:54 by dpuente-          #+#    #+#             */
/*   Updated: 2019/09/24 19:26:54 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	factorial(int num)
{
	if (num == 0)
		return (1);
	return (num * factorial(num - 1));
}

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
	{
		return (factorial(nb));
	}
	return (factorial(nb));
}

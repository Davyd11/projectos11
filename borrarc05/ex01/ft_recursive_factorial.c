/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 15:42:54 by dpuente-          #+#    #+#             */
/*   Updated: 2019/09/23 19:51:47 by dpuente-         ###   ########.fr       */
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
	if (nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	if (nb <= 0)
	{
		return (0);
	}
	else
	{
		return (factorial(nb));
	}
	return (factorial(nb));
}

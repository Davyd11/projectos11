/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 15:42:54 by dpuente-          #+#    #+#             */
/*   Updated: 2019/09/23 18:03:37 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int ft_recursive_factorial(int nb)
{	
	return (nb * ft_recursive_factorial(nb - 1));
}
int main ()
{
	printf("%d", ft_recursive_factorial(9));
}

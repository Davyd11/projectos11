/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 14:10:45 by dpuente-          #+#    #+#             */
/*   Updated: 2019/11/19 15:35:30 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	result(int cont, int res)
{
	if (cont % 2 != 0)
		res = res * -1;
	return (res);
}

int	ft_atoi(char *str)
{
	int x;
	int cont;
	int res;

	x = 0;
	cont = 0;
	res = 0;
	while (str[x] == ' ' || str[x] == '\n' || str[x] == '\f'
	|| str[x] == '\t' || str[x] == '\v')
		x++;
	while (str[x] == '+' || str[x] == '-')
	{
		if (str[x] == '-')
			cont--;
		x++;
	}
	while (str[x] <= 57 && str[x] >= 48)
	{
		res *= 10;
		res += str[x] - '0';
		x++;
	}
	return (result(cont, res));
}

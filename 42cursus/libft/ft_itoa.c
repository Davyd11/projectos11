/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 15:40:51 by dpuente-          #+#    #+#             */
/*   Updated: 2019/11/20 10:58:47 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		sumcount(int num)
{
	int count;

	count = 0;
	while (num != 0)
	{
		count++;
		num /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	char	*numbers;
	int		num;
	int		resto;
	int		p;

	p = 0;
	resto = 10;
	numbers = "012345789";
	num = sumcount(n);
	str = (char *)malloc(num + 1);
	str[num] = '\0';
	num--;
	while (n > 0)
	{
		str[num] = 48 + (n % 10);
		n = n / 10;
		num--;
	}
	return (str);
}

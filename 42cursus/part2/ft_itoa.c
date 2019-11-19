/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 15:40:51 by dpuente-          #+#    #+#             */
/*   Updated: 2019/11/19 17:17:30 by dpuente-         ###   ########.fr       */
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
	str = (char *)malloc(num);
	while (p <= num)
	{
		str[num] = (p % resto);
		resto *= 10;
		p++;
	}
	return (str);
}

int		main(void)
{
	printf("%s", ft_itoa(123));
}

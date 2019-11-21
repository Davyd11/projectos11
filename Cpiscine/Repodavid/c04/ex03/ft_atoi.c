/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 12:09:29 by dpuente-          #+#    #+#             */
/*   Updated: 2019/09/23 19:16:11 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int x;
	int cont;
	int res;

	res = 0;
	cont = 0;
	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] == '-')
			cont++;
		while (str[x] >= 47 && str[x] <= 58)
		{
			res = res * 10;
			res += (int)str[x] - '0';
			x++;
		}
		if ((cont % 2) != 0 && str[x - 1] >= 47 && str[x - 1] <= 58)
			return (-res);
		else if ((cont % 2) == 0 && str[x - 1] >= 47 && str[x - 1] <= 58)
			return (res);
		x++;
	}
	return (0);
}

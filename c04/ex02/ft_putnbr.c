/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 19:09:46 by dpuente-          #+#    #+#             */
/*   Updated: 2019/09/23 19:10:18 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		write(1, &(str[n]), 1);
		n++;
	}
}

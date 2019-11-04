/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 16:11:18 by dpuente-          #+#    #+#             */
/*   Updated: 2019/09/11 16:15:16 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int n;
	int count;

	count = 0;
	n = 0;
	while (str[n] != '\0')
	{
		count++;
		n++;
	}
	return (count);
}
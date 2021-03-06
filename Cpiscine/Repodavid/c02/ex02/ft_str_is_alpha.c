/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 20:25:46 by dpuente-          #+#    #+#             */
/*   Updated: 2019/09/18 16:45:00 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		if ((str[n] > 'z' || str[n] < 'a') && (str[n] > 'Z' || str[n] < 'A'))
		{
			return (0);
		}
		n++;
	}
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 14:10:45 by dpuente-          #+#    #+#             */
/*   Updated: 2019/11/12 10:43:37 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int p;
	int n;
	int nega;

	n = 0;
	p = 0;
	nega = 0;
	while (str[n] != '\0')
	{
		extra(n, *str, p, nega);
        /*
		if ((str[n] < 58) && (str[n] > 47))
		{
			p = (p * 10) + (str[n] - '0');
			n++;
		}
		else if ((str[0] == 45) && ((str[1] != 45) || (str[1] != 43)))
		{
			nega++;
			n++;
		}
		else if (str[0] == 43)
			n++;
		else
			return (0);
	}
	if (nega > 0)
		return ((p) * (-1));
	else
		return (p);
        */
}

int	extra(n, const char *str , p, nega) // no entidedo el error que me da visual studio
{
	if ((str[n] < 58) && (str[n] > 47))
	{
		p = (p * 10) + (str[n] - '0');
		n++;
	}
	else if ((str[0] == 45) && ((str[1] != 45) || (str[1] != 43)))
	{
		nega++;
		n++;
	}
	else if (str[0] == 43)
		n++;
	else
		return (0);
}
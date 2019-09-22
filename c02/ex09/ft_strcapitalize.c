/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 11:24:54 by dpuente-          #+#    #+#             */
/*   Updated: 2019/09/22 16:28:57 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	comprobar(int n, char *str)
{
	if ((str[n - 1] > 90) && (str[n - 1] < 97))
	{
		str[n] = str[n] - 32;
		if (str[n - 1] > 123)
		{
			str[n] = str[n] - 32;
		}
	}
}

void	minus(int n, char *str)
{
	if ((str[n] > '@' && str[n] < '['))
	{
		if ((str[n - 1] >= '/' && str[n - 1] <= ':'))
		{
			str[n] = str[n] + 32;
		}
		if ((str[n - 1] >= '`' && str[n - 1] <= '{'))
		{
			str[n] = str[n] + 32;
		}
		if ((str[n] > '@' && str[n] < '['))
		{
			str[n] = str[n] + 32;
		}
	}
}

void	first(char *str)
{
	if ((str[0] > 96) && (str[0] < 123))
	{
		str[0] = str[0] - 32;
	}
}

void	secti(char *str, int n)
{
	if (((str[n - 1] >= 90) && (str[n - 1] < 97)) ||
	((str[n - 1] >= 123) && (str[n - 1] < 127)))
	{
		str[n] = str[n] - 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int n;

	n = 0;
	while ((str[n] != '\0'))
	{
		minus(n, str);
		if ((str[n] > 96) && (str[n] <= 123))
		{
			if ((str[n - 1] >= 32) && (str[n - 1] < 48))
			{
				str[n] = str[n] - 32;
				comprobar(n, str);
			}
			if ((str[n - 1] >= 57) && (str[n - 1] < 65))
			{
				str[n] = str[n] - 32;
			}
			secti(str, n);
		}
		n++;
	}
	first(str);
	return (str);
}

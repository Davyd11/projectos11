/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyd11 <davyd11@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 13:20:30 by davyd11           #+#    #+#             */
/*   Updated: 2019/11/14 13:21:42 by davyd11          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_strlen.c"
​
char	**ft_split(char const *s, char c)
{
	char **plit;
	char *tt;
	int uno;
	int dos;
	int n;
​
	tt = s;
	uno = 0;
	if (!(dos = ft_strlen(s)))
		return (0);
​
	plit = (char*)malloc(sizeof(char) * dos);
	dos = 0;
	while (tt[n] != '\0')
	{
		if (tt[n] == c)
		{
			dos++;
			plit[uno][dos] = '\0';
			uno++;
			dos = 0;
		}
		else
		{
			plit[uno][dos] = tt[n];
			dos++;
			n++;
		}
	}
	return (plit);
}
​
int main ()
{
	ft_split("Hola que tal estas"," ");
}
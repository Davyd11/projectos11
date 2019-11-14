/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyd11 <davyd11@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 15:23:19 by davyd11           #+#    #+#             */
/*   Updated: 2019/11/14 13:21:52 by davyd11          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_strlen.c"

char	*ft_strtrim(char const *s1, char const *set)
{
	int n;
	int p;
	char *trim;
	char *constant;
	
	constant = s1;
	p = 0;
	n = 0;
	if (!(p = ft_strlen(s1)))
		return (0);
	trim = (char*)malloc(p);
	p = 0;
	while (constant[n] = '\0')
	{
		if(constant[n] == set[])//hay que resolver dudas sobre que contenido hay que eliminar del string
			n++;
			p++;
		trim[p] = constant[n];
		n++;
	}
	
}
// prodrian ponerme a quitar no solp unas letras si no palabras enterasa ?
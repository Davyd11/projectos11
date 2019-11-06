/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 09:00:02 by dpuente-          #+#    #+#             */
/*   Updated: 2019/11/05 09:00:21 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
void	*ft_memset(void *b ,int c, size_t len)
{
	int j;
	char	*ptr;

	j = 0;
	if (b == NULL)
	{
		return(NULL);
	}

	ptr = b;
	while (len-- > 0) //problema con el bucle, solo modifica  unn valor 
	{
		*ptr = c;
		ptr++;
	}
	return(b);
}
int main ()
{
	int  n = 9;
	int hola[] = {1, 4, 7} ;
	
	ft_memset(hola, 0, sizeof(int)*2);
	printf("%d, %d, %d",hola[0], hola[1], hola[2]);	
}

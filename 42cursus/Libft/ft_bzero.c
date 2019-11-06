/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 09:23:37 by dpuente-          #+#    #+#             */
/*   Updated: 2019/11/05 09:23:43 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
void	*ft_bzeero(void *b , size_t len)
{
	char	*ptr;

	ptr = b;
	while (len-- > 0)
	{
		*ptr = 0;
		ptr++;
	}
	return(b);
}
int main ()
{
	int  n = 9;
	int hola[] = {1, 4, 7} ;
	
	ft_bzeero(hola, sizeof(int)*3);
	printf("%d, %d, %d",hola[0], hola[1], hola[2]);
	
}

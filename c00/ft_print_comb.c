/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 14:23:08 by dpuente-          #+#    #+#             */
/*   Updated: 2019/09/06 14:23:16 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int i;
int j;
int k;


i, j, k = 0;
		
void	bucle(i, j, k)
{
	char* n;

	n = "0123456789";

	while (i >= 9)
		{
			j = i + 1;
			while (j >= 9)
			{
				k = j + 1;
				while (k >= 9)
				{
					write(1, &n[i], 1);
					write(1, &n[j], 1);
					write(1, &n[k], 1);
					write(1, ",", 1);
					write(1, " ", 1);
					k++;
				}
				j++;
			}
			i++;
		}
};

void	ft_print_numbers(void)
	{
		bucle (i, j, k);
		
	}

int main (){ft_print_numbers();}

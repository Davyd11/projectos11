/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 15:31:54 by dpuente-          #+#    #+#             */
/*   Updated: 2020/02/17 17:36:58 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	//int i;
	//float f;
	//double d;
	char *ch;
	//char c;

	//i = 1234567890;
	//f = 3209.1417;
	//d = 123.456789;
	//c = 'D';
	ch = "Estamos genial tio";
	/*char *s = "Mundo";
	int i = 56;
	unsigned int x = 0;*/

		//printf("Hola <%10.5s><%7.4i><%x>\n", s, i, x);
		//ft_printf("Hola <%10.5s><%7.4i><%x>\n", s, i, x);
		printf("\nOriginal: \n");
		printf("Hola que tal estamos: %s", ch);
		printf("\n----------------------\n");
		printf("FT_COPY: \n");
		ft_printf("Hola que tal estamos: %s", ch);
		printf("\n");
}
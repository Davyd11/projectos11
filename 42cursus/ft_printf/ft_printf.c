/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 13:17:45 by dpuente-          #+#    #+#             */
/*   Updated: 2020/02/04 15:20:05 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_printf(const char *format, ...)
{
	t_flags f;

	f.len = 0;
	f.i = 0;
	va_start(f.ap, format);
	if (ft_strchr(format, '%'))
		percent_finder(format, &f);
	else
	{
		ft_putstr(format);
		f.len = ft_strlen(format);
	}
	va_end(f.ap);
	return (f.len);
}


int	main(void)
{
	char *s = "Mundo";
	int i = 56;
	unsigned int x = 0;

		printf("Hola <%10.5s><%7.4i><%x>\n", s, i, x);
		ft_printf("Hola <%10.5s><%7.4i><%x>\n", s, i, x);
}

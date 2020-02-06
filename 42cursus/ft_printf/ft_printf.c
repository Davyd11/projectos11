/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 13:17:45 by dpuente-          #+#    #+#             */
/*   Updated: 2020/02/06 17:39:51 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

typedef struct	s_flags
{
	va_list		ap;
	int			len;
	int			i;
	int			flag_width;
	int			width;
	int			flag_precision;				// What for ?????
	int			precision;					// What for ?????
}				t_flags;
//*********************************************************************************************************
// FUNCTIONS FROM LIBFT
//*********************************************************************************************************
int		ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

void	ft_putstr(const char *s)
{
	while (*s)
	{
		write(1, &(*s), 1);
		s++;
	}
}

char	*ft_strchr(const char *s, int c) //*****************************************************************
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (*s == c)
		return ((char *)s);
	return (NULL);
}

void	flags_to_zero(t_flags *f)
{
	f->flag_width = 0;
	f->width = 0;
	f->flag_precision = 0;
	f->precision = 0;
}
//*********************************************************************************************************
// ACTUAL PRINTF CODE
//*********************************************************************************************************
/*void int_format(t_flags *f, char *numbs_ten)
{
	int n;
	int len;																// how long is the number

	n = va_arg(f->ap, int);
	while (n)
	{
		if (n >= 48 && n <= 57)
			write(1, &numbs_ten[n - 48], 1);
		n++;
	}
	
	len = 0;	
}*/
void	single_char(t_flags *f)
{
	int t;
	
	t = va_arg(f->ap, int);
	write(1, &t, 1);
}

void format_sorting(const char *format, t_flags *f)								// send to specific function depending on flag
{
	if (format[f->i] == 'c')
		single_char(f);
	if (format[f->i] == 'd' || format[f->i] == 'i')
		int_format(f, "0123456789");

}

void	percent_finder(const char *format, t_flags *f)
{
	while (format[f->i]) // mientras exista string que leer...
	{
		if (format[f->i] == '%')
		{
			f->i++;
			flags_to_zero(f);
			if (ft_strchr(".0123456789", format[f->i]))
				printf("******numero de espacios...******\n");
				//flag_sorting(format, f);
			if (ft_strchr("cdefgiosuxX", format[f->i])) 						//mandatory part (cspdiuxX%)
				format_sorting(format, f);
		}
		else 																	// prints all text except for the %d ...
		{
			write(1, &format[f->i], 1);
			f->len++;
		}
		f->i++;
	}
}

int		ft_printf(const char *format, ...)
{
	t_flags f;

	f.len = 0;
	f.i = 0;
	va_start(f.ap, format);
	if (ft_strchr(format, '%')) 					//go to search  if there is any %
		percent_finder(format, &f);
	else											//just print on screen all text(no flags)
		ft_putstr(format);
		f.len = ft_strlen(format);
	va_end(f.ap);
	return (f.len);
}


int	main(void)
{
	/*char *s = "Mundo";
	int i = 56;
	unsigned int x = 0;*/

		//printf("Hola <%10.5s><%7.4i><%x>\n", s, i, x);
		//ft_printf("Hola <%10.5s><%7.4i><%x>\n", s, i, x);
		printf("\nOriginal: \n");
		printf("Hola que tal estamos 1 %d 2345\n----------------------\n", 123123);
		printf("FT_COPY: \n");
		ft_printf("Hola que tal estamos 1 %d 2345\n", 123123);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyd11 <davyd11@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 13:17:45 by dpuente-          #+#    #+#             */
/*   Updated: 2020/02/10 14:39:20 by davyd11          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//*********************************************************************************************************
// MAIN STRUCT
//*********************************************************************************************************
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

void ft_putchar(char s)
{
	write(1, &s, 1);
}

void    ft_putnbr(int nb)
{
	long i;

	i = nb;
	if (i < 0)
	{
			ft_putchar('-');
			i = i * (-1);
	}
	if (i > 9)
	{
			ft_putnbr(i / 10);
			ft_putnbr(i % 10);
	}
	else
	{
			ft_putchar(i + '0');
	}
}

void    ft_putnbrfloat(int nb)
{
	long i;
	/*char *txt;

	txt = "0123456789.";*/
	i = nb;
	if (i < 0)
	{
		ft_putchar('-');
		i = i * (-1);
	}
	if (i > 9)
	{
		ft_putnbrfloat(i / 10);
		ft_putnbrfloat(i % 10);
	}
	else
		ft_putchar(i + '0');
}

char	*ft_strchr(const char *s, int c)
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
void float_format(t_flags *f)
{
	double n;

	n = va_arg(f->ap, double);
	//printf("------%f------", n);				//prints the value that is soposed to be printed
	ft_putnbrfloat(n);					// PRINT FLOAT VARIABLES
	//I will need to use the itoa to print decimals 
}

void int_format(t_flags *f)
{
	int n;

	n = va_arg(f->ap, int);
	ft_putnbr(n);
}
void	single_char(t_flags *f)
{
	char *t;
	
	t = va_arg(f->ap, char *);
	write(1, &t, 1);
}

void str_format(t_flags *f)
{
	char *str;
	int sum;

	sum = 0;
	
	str = va_arg(f->ap, char *);
	while (str[sum] != '\0')
	{
		write(1, &str[sum], 1);
		sum++;
	}
}

void flag_sorting(const char *format, t_flags *f)
{
	printf("Entra en las flags, pero hay que hacerlas primero jeje");
}

void format_sorting(const char *format, t_flags *f)								// send to specific function depending on flag
{
	if (format[f->i] == 'c')
		single_char(f);
	if (format[f->i] == 'd' || format[f->i] == 'i')
		int_format(f);
	if (format[f->i] == 'f')
		float_format(f);
	if (format[f->i] == 's')
		str_format(f);
	
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
		// For the flags: run a loop that cheeck for a limited number of character if ther is any flag char
		percent_finder(format, &f);
	else											//just print on screen all text(no flags)
	{
		ft_putstr(format);
		f.len = ft_strlen(format);
	}
	va_end(f.ap);
	return (f.len);
}


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
		printf("Hola que tal estamos: %s\n----------------------\n", ch);
		printf("FT_COPY: \n");
		ft_printf("Hola que tal estamos: %s\n", ch);
}






//QUE NO IMPRIMA SI %D %I SON FLOATS I NO INTS(IMPRIME CON TODO)
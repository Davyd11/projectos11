/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 13:17:45 by dpuente-          #+#    #+#             */
/*   Updated: 2020/02/17 17:23:52 by dpuente-         ###   ########.fr       */
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

void int_format(t_flags *f)
{
	int n;

	n = va_arg(f->ap, int);
	ft_putnbr_fd(n, 1);
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
	write(1, &format, 0);				///////////////////////////////////////////////////////////////////////////////
	write(1, &f, 0);					///////////////////////////////////////////////////////////////////////////////
}

void format_sorting(const char *format, t_flags *f)								// send to specific function depending on flag
{
	if (format[f->i] == 'c')
		single_char(f);
	if (format[f->i] == 'd' || format[f->i] == 'i')								// finish the selection to aboid floats
		int_format(f);
	if (format[f->i] == 's')
		str_format(f);
	/*if (format[f->i] == 'x')
		format_base_hexa(f);*/
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
			if (ft_strchr("cdefgiosuxXp", format[f->i])) 						//mandatory part (csgdiuxX%) DONE(c,d,i,f,s)
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

int		ft_printf(char *format, ...)
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
		ft_putstr_fd(format, 0);
		f.len = ft_strlen(format);
	}
	va_end(f.ap);
	return (f.len);
}

//QUE NO IMPRIMA SI %D %I SON FLOATS I NO INTS(IMPRIME CON TODO)
//LEN OF THE HOLE STRING ...
//FLAGS//
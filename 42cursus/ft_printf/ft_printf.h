/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 14:54:52 by dpuente-          #+#    #+#             */
/*   Updated: 2020/02/04 15:19:12 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "libft.a"

typedef struct	s_flags
{
	va_list		ap;
	int			len;
	int			i;
	int			flag_width;
	int			width;
	int			flag_precision;
	int			precision;
}				t_flags;



/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 14:54:52 by dpuente-          #+#    #+#             */
/*   Updated: 2020/02/17 15:47:51 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> //
#include <unistd.h>
#include <stdarg.h>
#include "libft/libft.h"

int			ft_printf(char *format, ...);
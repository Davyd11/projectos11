/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 14:31:52 by dpuente-          #+#    #+#             */
/*   Updated: 2019/12/04 19:59:20 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_fd(char *str, int fd)
{
	int n;

	n = 0;
	if (str)
	{
		while (str[n] != '\0')
		{
			write(fd, &(str[n]), 1);
			n++;
		}
	}
}

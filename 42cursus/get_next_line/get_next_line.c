/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2019/12/05 11:48:21 by dpuente-          #+#    #+#             */
/*   Updated: 2019/12/20 13:25:02 by davyd11          ###   ########.fr       */
=======
/*   Created: 2020/01/10 10:32:48 by dpuente-          #+#    #+#             */
/*   Updated: 2020/01/10 17:37:21 by dpuente-         ###   ########.fr       */
>>>>>>> f5641d074019bf59c6132c4607a4d44d7a3795ac
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "get_next_line_utils.c"
#include <stdio.h>

int			get_next_line(const int fd, char **line)
{
	int ret;
	char *save;
	int n;

	//malloc para reservar memoria para el almacenamiento de read
	n = 0;
	while ((ret = read(fd, save, 9)) > 0)
	{
		while (save[n] != '\0')
		{
			printf("%c", save[n]);
			n++;
		}
	}
	return 0;
}



int main (int none, const char **input)
{
	int fd;
	char *line;

	fd = open(input[1], O_RDONLY);
	get_next_line(fd, &line);
}

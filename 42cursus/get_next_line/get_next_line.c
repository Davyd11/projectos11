/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyd11 <davyd11@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 11:48:21 by dpuente-          #+#    #+#             */
/*   Updated: 2019/12/18 12:29:25 by davyd11          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int get_next_line(int fd, char **line)
{
	char buf[BUFF_SIZE + 1];

	if ((fd < 0 || *line == NULL || read(fd, buf, 0) < 0))
		return(-1);
	while ((fd > 0  && *line != NULL))
	{
		if (*line == '/n')

		line++;
	}
}


// se pude usar calloc con el free para el almacenamiento de los resultados
// la otra opcione es usar listas encadenadas par hcaer uns gestion de la memoria dinamica
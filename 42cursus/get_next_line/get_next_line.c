/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyd11 <davyd11@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 11:48:21 by dpuente-          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2019/12/13 16:17:52 by davyd11          ###   ########.fr       */
=======
/*   Updated: 2019/12/10 12:21:52 by dpuente-         ###   ########.fr       */
>>>>>>> 3d28e6e5a240eeba904670daa15863bb90034cfd
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static t_list good_file(t_list *file, int fd)
{
	
}

int get_next_line(int fd, char **line)
{
<<<<<<< HEAD
	char buf[BUFF_SIZE + 1];

	if ((fd < 0 || *line == NULL || read(fd, buf, 0) < 0))
		return(-1);
	
=======
	int count;

	count = 0;
	while (count )
	{
		
	}
>>>>>>> 3d28e6e5a240eeba904670daa15863bb90034cfd
}

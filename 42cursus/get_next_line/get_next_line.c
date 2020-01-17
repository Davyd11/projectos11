/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyd11 <davyd11@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 10:32:48 by dpuente-          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/01/17 17:10:51 by dpuente-         ###   ########.fr       */
=======
/*   Updated: 2020/01/16 15:31:20 by davyd11          ###   ########.fr       */
>>>>>>> 5247420ec90842ee4bdf0b8bd5f729bb34fb827c
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		readline(char **ch, char **line, int fd)
{
	int		len;
	char	*aux;

	len = 0;
	while (ch[fd][len] != '\n')
		len++;
	*line = ft_substr(ch[fd], 0, len);
	aux = ft_strdup(&ch[fd][len + 1]);
	free(ch[fd]);
	ch[fd] = aux;
	return (1);
}

static int		output(char **ch, char **line, int ret, int fd)
{
	if (ret < 0)
		return (-1);
<<<<<<< HEAD
	else if (ret == 0 && (ch[fd] == NULL || ch[fd][0] == '\0'))
=======
	else if (ret == 0 && (a[fd] == NULL || a[fd][0] == '\0')) // =just whene file is empty will return 0 instead of segfoul
>>>>>>> 5247420ec90842ee4bdf0b8bd5f729bb34fb827c
	{
		*line = ft_strdup("");
		ft_strdel(&ch[fd]);
		return (0);
	}
<<<<<<< HEAD
	else if (ft_strchr(ch[fd], '\n'))
		return (readline(ch, line, fd));
	else
=======
	else if (ft_strchr(a[fd], '\n')) // finds a \n --> identifies what's part of that line and what not
		return (readline(a, line, fd));
	else							// reach the end of the file so deletes everything and return 0
>>>>>>> 5247420ec90842ee4bdf0b8bd5f729bb34fb827c
	{
		*line = ft_strdup(ch[fd]);
		ft_strdel(&ch[fd]);
		return (0);
	}
}

int				get_next_line(int fd, char **line)	//File descriptor and double pointer to store the lines readed
{
<<<<<<< HEAD
	char		*tmp;								// 
	static char	*ch[4096];							// 
	int			ret;								// number of bytes readed
	char		*buff;								// 
=======
	char		*tmp;								// memoria dinamica 
	static char	*a[4096];							// estatica
	int			ret;								// number of bytes readed not the expeacted
	char		*buff;								// memoria dinamicas 
>>>>>>> 5247420ec90842ee4bdf0b8bd5f729bb34fb827c

	if (fd < 0 || line == NULL || BUFF_SIZE < 1 ||
		(!(buff = (char *)malloc(sizeof(char) * BUFF_SIZE + 1))))
		return (-1);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		if (ch[fd] == NULL)
			ch[fd] = ft_strdup(buff);
		else
		{
			tmp = ft_strjoin(ch[fd], buff);
			free(ch[fd]);
			ch[fd] = tmp;
		}
		if (ft_strchr(ch[fd], '\n'))
			break ;
	}
	free(buff);
<<<<<<< HEAD
	return (output(ch, line, ret, fd));
}
=======
	return (output(a, line, ret, fd));				//here a[] is ????????????????? 
}

// line used for ...?
//what's a[] used for ?
>>>>>>> 5247420ec90842ee4bdf0b8bd5f729bb34fb827c

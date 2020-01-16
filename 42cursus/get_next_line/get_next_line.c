/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 10:32:48 by dpuente-          #+#    #+#             */
/*   Updated: 2020/01/16 10:57:11 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "get_next_line_utils.c"
#include "get_next_line.h"

static int		readline(char **a, char **line, int fd)
{
	int		len;
	char	*aux;

	len = 0;
	while (a[fd][len] != '\n')
		len++;
	*line = ft_substr(a[fd], 0, len);
	aux = ft_strdup(&a[fd][len + 1]);
	free(a[fd]);
	a[fd] = aux;
	return (1);
}

static int		output(char **a, char **line, int ret, int fd)
{
	if (ret < 0)
		return (-1);
	else if (ret == 0 && (a[fd] == NULL || a[fd][0] == '\0'))
	{
		*line = ft_strdup("");
		strdel(&a[fd]);
		return (0);
	}
	else if (ft_strchr(a[fd], '\n'))
		return (readline(a, line, fd));
	else
	{
		*line = ft_strdup(a[fd]);
		strdel(&a[fd]);
		return (0);
	}
}

int				get_next_line(int fd, char **line)	//File descriptor and double pointer to store the lines readed
{
	char		*tmp;								// 
	static char	*a[4096];							// 
	int			ret;								// number of bytes readed
	char		*buff;								// 

	if (fd < 0 || line == NULL || BUFF_SIZE < 1 ||
		(!(buff = (char *)malloc(sizeof(char) * BUFF_SIZE + 1))))
		return (-1);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		if (a[fd] == NULL)
			a[fd] = ft_strdup(buff);
		else
		{
			tmp = ft_strjoin(a[fd], buff);
			free(a[fd]);
			a[fd] = tmp;
		}
		if (ft_strchr(a[fd], '\n'))
			break ;
	}
	free(buff);
	return (output(a, line, ret, fd));
}
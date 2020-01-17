/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 10:32:48 by dpuente-          #+#    #+#             */
/*   Updated: 2020/01/17 17:10:51 by dpuente-         ###   ########.fr       */
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
	else if (ret == 0 && (ch[fd] == NULL || ch[fd][0] == '\0'))
	{
		*line = ft_strdup("");
		ft_strdel(&ch[fd]);
		return (0);
	}
	else if (ft_strchr(ch[fd], '\n'))
		return (readline(ch, line, fd));
	else
	{
		*line = ft_strdup(ch[fd]);
		ft_strdel(&ch[fd]);
		return (0);
	}
}

int				get_next_line(int fd, char **line)	//File descriptor and double pointer to store the lines readed
{
	char		*tmp;								// 
	static char	*ch[4096];							// 
	int			ret;								// number of bytes readed
	char		*buff;								// 

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
	return (output(ch, line, ret, fd));
}
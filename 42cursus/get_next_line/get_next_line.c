/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 11:48:21 by dpuente-          #+#    #+#             */
/*   Updated: 2019/12/18 15:41:49 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "get_next_line_utils.c"

static int	appendline(char **s, char **line)
{
	int		len;
	char	*tmp;

	len = 0;
	while ((*s)[len] != '\n' && (*s)[len] != '\0')
		len++;
	if ((*s)[len] == '\n')
	{
		*line = ft_strsub(*s, 0, len);
		tmp = ft_strdup(&((*s)[len + 1]));
		free(*s);
		*s = tmp;
		if ((*s)[0] == '\0')
			ft_strdel(s);
	}
	else
	{
		*line = ft_strdup(*s);
		ft_strdel(s);
	}
	return (1);
}

static int	output(char **s, char **line, int ret, int fd)
{
	if (ret < 0)
		return (-1);
	else if (ret == 0 && s[fd] == NULL)
		return (0);
	else
		return (appendline(&s[fd], line));
}

int			get_next_line(const int fd, char **line)
{
	int			ret;								// intiger to asigned into the read function
	static char	*s[FD_SIZE];						// *****************
	char		buff[BUFF_SIZE + 1];				// ***************** I supose is used for knowing the maximun characters in the file 
	char		*tmp;								// 

	if (fd < 0 || line == NULL)						// in case of a wrong file desciptor o a null value in the file the function will return -1
		return (-1);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)	// while the file we are reading isnt´t empty 
	{
		buff[ret] = '\0';							// will asign a null value to the end of the file, so the end will be detected
		if (s[fd] == NULL)							// 
			s[fd] = ft_strdup(buff);				//
		else
		{
			tmp = ft_strjoin(s[fd], buff);			//
			free(s[fd]);							// 
			s[fd] = tmp;							//
		}
		if (ft_strchr(s[fd], '\n'))					//
			break ;
	}
	return (output(s, line, ret, fd));				//
}

// se pude usar calloc con el free para el almacenamiento de los resultados
// la otra opcione es usar listas encadenadas par hcaer uns gestion de la memoria dinamica
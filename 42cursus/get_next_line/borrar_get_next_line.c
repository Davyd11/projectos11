/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   borrar_get_next_line.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 11:48:21 by dpuente-          #+#    #+#             */
/*   Updated: 2020/01/10 12:47:21 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "get_next_line_utils.c"

static int	appendline(char **s, char **line)
{
	int		len;									// count moving through pointer 
	char	*tmp;									// 

	len = 0;
	while ((*s)[len] != '\n' && (*s)[len] != '\0') 	// will move until its EOF or next line  
		len++;
	if ((*s)[len] == '\n')							// Only whene new line 
	{
		*line = ft_strsub(*s, 0, len);				// position of storage pointer equal to ***********
		tmp = ft_strdup(&((*s)[len + 1]));
		free(*s);
		*s = tmp;
		if ((*s)[0] == '\0')						// if the first char is the EOF will resturn 
			ft_strdel(s);
	}
	else											//*****NOT SURE***** in case the character is a \0 will return ******
	{
		*line = ft_strdup(*s);
		ft_strdel(s);
	}
	return (1);										// return 1 couse the character isn't \0 or \n
}

static int	output(char **s, char **line, int ret, int fd)
{
	if (ret < 0)									// if the value isn´t coherent will return -1 (error in the file)
		return (-1);
	else if (ret == 0 && s[fd] == NULL)				// will return a 0 if the function reached the EOF
		return (0);
	else
		return (appendline(&s[fd], line));			// whene the value is valid for interpretation call appendline so line gets stored
}

int			get_next_line(const int fd, char **line)
{
	int			ret;								// intiger to asigned into the read function
	static char	*s[FD_SIZE];						// Pointer to the buffer only for the BONUS part
	char		buff[BUFF_SIZE + 1];				// Pointer to the buffer that will be changes in compilation 
	char		*tmp;								// character pointer for storage of the file characters(ft_strjoin)

	if (fd < 0 || line == NULL)						// in case of a wrong file desciptor o a null value in the file the function will return -1
		return (-1);
	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)	// while the file we are reading isnt´t empty 
	{
		buff[ret] = '\0';							// will assign a null value to the end of the file,the end will be detected
		if (s[fd] == NULL)							// ****************** BONUS ********************
			s[fd] = ft_strdup(buff);				// Equal to ***************
		else
		{
			tmp = ft_strjoin(s[fd], buff);			// ss
			free(s[fd]);							// Release the whole space from s[]
			s[fd] = tmp;							// reasign the space to tmp
		}
		if (ft_strchr(s[fd], '\n'))					// Will check all digits until end of buffer or \n
			break ;
	}
	return (output(s, line, ret, fd));				// FUNCTION OUTPUT (just 1,0,-1)
}


int main (int p, char **text)
{	int fd;
	char *line;

	p = 0;
	p++;
	
	fd = open(text, O_RDONLY);
	get_next_line(fd, &line);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 11:06:44 by dpuente-          #+#    #+#             */
/*   Updated: 2020/01/09 11:03:47 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE
#include <unistd.h>
#include <stdlib.h>
# define BUFF_SIZE 4096
# define FD_SIZE 8
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int		get_next_line(const int fd, char **line);

#endif

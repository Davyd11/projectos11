/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 11:06:44 by dpuente-          #+#    #+#             */
/*   Updated: 2020/01/22 11:04:37 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# define BUFF_SIZE 4096
# define FD_SIZE 8
# include <fcntl.h>

int		ft_strlen(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *src);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *str, int c);
char	*ft_strnew(size_t size);
void	ft_memdel(void **ap);
void	ft_strdel(char **as);
int		get_next_line(const int fd, char **line);

#endif

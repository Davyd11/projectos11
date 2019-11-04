/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpalazon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/21 10:39:21 by cpalazon          #+#    #+#             */
/*   Updated: 2019/09/22 11:03:26 by cpalazon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

char	*ft_dicc(void);
char	*ft_dicc2(char **argv);
void	ft_print(char *len, char **argv);

void	ft_write(char **argv)
{
	int x;
	int y;
	char *len;

	x = 0;
	while ((argv[1][x] != '\0') && (argv[1][x] >= '0') && (argv[1][x] <= '9'))
		x++;
	if (argv[1][x] == '\0')
	{
		len = ft_dicc();
		if (len != 0)
			ft_print(len, argv);
	}	
	else
		write(1, "Error\n", 6);
}

void	ft_write2(char **argv)
{
	int x;
	int y;

	x = 0;
	while ((argv[2][x] != '\0') && (argv[2][x] >= '0') && (argv[2][x] <= '9'))
		x++;
	if (argv[2][x] == '\0')
		printf("%s", ft_dicc2(argv));
	else
		write(1, "Error\n", 6);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_write(argv);
	else if (argc == 3)
		ft_write2(argv);
	else
		write(1, "Error\n", 6);
	return (0);
}

char	*ft_dicc(void)
{
	int fd;
	char *file;
	char texto;
	int i;

	i = 0;
	fd = open("./numbers.dict.txt", O_RDONLY);
	if(fd != -1)
	{
		while(read(fd, &texto, 1))
			i++;
		file = (char*) malloc(sizeof(char) * i);
		i = 0;
		close(fd);
		fd = open("./numbers.dict.txt", O_RDONLY);
		while(read(fd, &texto, 1))
		{
			file[i] = texto;
			i++;
		}
	}
	else
	{
		write(1, "Error", 5);
		return(0);
	}
	return(file);
}

char	*ft_dicc2(char **argv)
{
	int fd;
	char *file;
	char texto;
	int i;

	i = 0;
	fd = open(argv[1], O_RDONLY);
	if(fd != -1)
	{
		while(read(fd, &texto, 1))
			i++;
		file = (char*) malloc(sizeof(char) * i);
		i = 0;
		close(fd);
		fd = open(argv[1], O_RDONLY);
		while(read(fd, &texto, 1))
		{
			file[i] = texto;
			i++;
		}
	}
	else
		return("Error\n");
	return(file);
}

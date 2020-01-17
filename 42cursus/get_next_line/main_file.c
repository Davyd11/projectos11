/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_file.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 16:41:02 by dpuente-          #+#    #+#             */
/*   Updated: 2020/01/17 16:47:40 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


int main(int argc, char **argv)
{
    int i;
    int fd;
    int fd2;
    int retorno;
    char *line;
    if (argc >= 2)
    {
        i = 0;
        fd = open(argv[1], O_RDONLY);
        fd2 = open(argv[2], O_RDONLY);
        while ((retorno = get_next_line(fd, &line)) == 1)
        {
            printf("%d - ",retorno);
            printf("%s\n", line);
        }
		printf("%d - ",retorno);
        printf("%s\n", line);
    }
    return (0);
}

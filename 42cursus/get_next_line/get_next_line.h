/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyd11 <davyd11@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 11:06:44 by dpuente-          #+#    #+#             */
/*   Updated: 2019/12/13 16:20:10 by davyd11          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE
#include <unistd.h>
#include <stdlib.h>
# define BUFF_SIZE 4242

typedef struct	s_list
{
	void				*content;
	struct s_list		*next;
}				t_list;


#endif

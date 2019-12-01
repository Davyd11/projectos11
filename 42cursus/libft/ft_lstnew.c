/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyd11 <davyd11@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 12:52:51 by dpuente-          #+#    #+#             */
/*   Updated: 2019/12/01 13:27:58 by davyd11          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elemento;

	if (!(elemento = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	if (content == NULL)
		elemento->content = NULL;
	else
		elemento->content = (void *)content;
	elemento->next = NULL;
	return (elemento);
}

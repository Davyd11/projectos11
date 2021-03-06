/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 12:33:46 by dpuente-          #+#    #+#             */
/*   Updated: 2019/12/04 14:30:37 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list		*begin;

	if (alst && new)
	{
		begin = (*alst);
		if (begin == NULL)
		{
			new->next = *alst;
			*alst = new;
		}
		else
		{
			while (begin->next)
				begin = begin->next;
			begin->next = new;
		}
	}
}

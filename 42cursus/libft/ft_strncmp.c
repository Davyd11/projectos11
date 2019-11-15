/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpuente- <dpuente-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 11:06:24 by dpuente-          #+#    #+#             */
/*   Updated: 2019/11/12 11:07:05 by dpuente-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *str1, char *str2, int n)
{
	int uno;

	uno = 0;
	while (str1[uno] != '\0' && str2[uno] != '\0' &&
	str1[uno] == str2[uno] && (uno < n - 1))
	{
		uno++;
	}
	return (str1[uno] - str2[uno]);
}

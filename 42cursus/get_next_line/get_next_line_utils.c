/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davyd11 <davyd11@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 15:40:13 by dpuente-          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2020/01/17 17:03:58 by dpuente-         ###   ########.fr       */
=======
/*   Updated: 2020/01/16 17:45:39 by davyd11          ###   ########.fr       */
>>>>>>> 5247420ec90842ee4bdf0b8bd5f729bb34fb827c
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *str)
{
	int num;

	num = 0;
	while (str[num] != '\0')
	{
		num++;
	}
	return (num);
}
char	*ft_strdup(const char *src) // Creates a space in memory and stores the string in it
{
	char	*new;
	int		i;
	int		size;

	size = 0;
	while (src[size]) //get the size of the string
		++size;
	if (!(new = malloc(sizeof(char) * (size + 1)))) //assigns the size for he storage 
		return (NULL);
	i = 0;
	while (src[i]) //introduce the data into the space assigned
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*src;
	int		i;
	size_t	n;

	n = 0;
	if (!s)
		return (NULL);
	while (s[n] != '\0')
		n++;
	if (start > n)
		return (ft_strdup(""));
	if (len >= n)
		len = n;
	if (!(src = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	len = start + len;
	while (start < len)
	{
		src[i] = s[start];
		i++;
		start++;
	}
	src[i] = '\0';
	return (src);
}
char	*ft_strjoin(char const *s1, char const *s2) // joins to strings in one 
{
	int		n;
	int		p;
	int		size;
	char	*join;

	p = 0;
	n = 0;
	if (!s1)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	if (!(join = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	while (s1[n] != '\0')
	{
		join[n] = s1[n];
		n++;
	}
	while (s2[p] != '\0')
	{
		join[n] = s2[p];
		p++;
		n++;
	}
	join[n] = '\0';
	return (join);
}
char	*ft_strchr(const char *str, int c) // Search for a character and return strign from there
{
	while (*str != c)					// ft_strchr("www.hola.es", ".") --> .hola.es
	{
		if (*str == '\0')
			return (0);
		str++;
	}
	return ((char*)str);
}

char	*ft_strnew(size_t size) //Creates a space in memory and iniciates it with \0
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)malloc(sizeof(*str) * size + 1);
	if (str == NULL)
		return (NULL);
	while (i <= size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}

void	ft_memdel(void **ap) //frees the memory selected
{
	if (ap != NULL)
	{
		free(*ap);
		*ap = NULL;
	}
}

void	ft_strdel(char **as) //eliminates characters from a string *****the original function ask for the number of character to erase from start and end *************
{
	if (as != NULL && *as != NULL)
		ft_memdel((void**)as);
}

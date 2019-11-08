#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*new;
	int		i;
	int		size;

	size = 0;
	while (src[size]) /* Mesure the string */
		++size;
	if (!(new = malloc(sizeof(char) * (size + 1)))) /* WHY THE  EXCLAMATION SIGN*/
		return (NULL);
	i = 0;
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

int main()
{
	char source[] = "Hola David";

	char* target = ft_strdup(source);
	printf("%s", target);
}
/* Explanation: strdup just reserve a espace in memory 
 but a the same time it asign a value to that memory it reserved 
 previusly*/
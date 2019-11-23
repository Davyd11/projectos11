#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	countindi(char const *s, char c, int n) //cuenta el numero de palabras qye hay que cada corte
{
	int count;

	count = 0;
	n++;
	while (s[n] != c)
	{
		count++;
	}
	return (count);
}

char	nwords(char const *s, char c)
{
	int n;
	int count;
	char **finaltext;

	count = 0;
	n = 0;
	while (s[n] != '\0')
	{
		if ((s[n] == c) && (s[n + 1] != c))// crea la cuenta de cuantos cortes habra que hacer al string
		{
			countindi(s, c, n);// mal, relocalizar 
			count++;
		}
		n++;
	}
	finaltext = malloc(count);
	return (finaltext);
}

char **ft_split(char const *s, char c)
{
	char	**textreturn;

	textreturn = nwords(s, c);

	return (textreturn);
}

int main(void)
{
	printf(ft_split("  hola que tal estamos,  por  aqui  ", " "));
}
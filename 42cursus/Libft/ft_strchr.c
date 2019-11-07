#include <stdio.h>

char	*ft_strchr(const char *str, int c)
{
	while (*str != c)
	{
		if (*str == '\0')
			return (0);
		str++;
	}
	return ((char*)str);
}
int main ()
{
    char caracter = '.';
    char string[] = "hola. que tal .estamos";
    printf ("%s", ft_strchr(string, caracter));
}
#include <stdio.h>

char	*ft_strrchr(const char *str, int c)
{
    int n;

    n = 0;
    while (str[n] != '\0')
    {
        n++;
    }
	while (str[n] != c)
	{
		if (n <= 0)
			return (0);
		n--;
	}
	return (str + n);
}
int main ()
{
    char caracter = '.';
    char string[] = "hola. que tal .estamos";
    printf ("%s", ft_strrchr(string, caracter));
}
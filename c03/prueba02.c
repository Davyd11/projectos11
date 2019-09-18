#include <stdio.h>

char    *ft_strcat(char* dest, char* src)
{
	int cara;
	int dire;

	dire = 0;
	cara = 0;
	while (dest[cara] != '\0')
	{
		printf("%d\n", cara);
		cara++;
	}

	printf("%d\n", cara);
	dest[cara] = 0;
	while (src[dire] != '\0')
	{
		dest[cara] = src[dire];
		dire++;
		cara++;
	}
	dest[cara] = '\0';
	printf("%d\n", cara);
	return (dest, src);

}

int main ()
{
	char nombre[8] = {"hola"};
	char apellido[4] = {"juan"};
	printf ("%s", ft_strcat(nombre, apellido));
}

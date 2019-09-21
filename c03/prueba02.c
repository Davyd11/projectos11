#include <stdio.h>
<<<<<<< HEAD
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int n;
	int j;

	n = 0;
	j = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	while (j < nb)
	{
		dest[n] = src[j];
		n++;
		j++;
	}
	dest[n] = '\0';
	return (dest);
}

int main(void) {
    
    char dest[10] = "holaa";
    char src[] = "pepe";
	
	ft_strncat(dest, src, 2);
    printf("%s\n", dest);
    return 0;
}
=======

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
>>>>>>> 5e1b4bb15612ebd60ac0e4ed37500fbb6ad14348

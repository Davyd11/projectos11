#include <stdio.h>
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
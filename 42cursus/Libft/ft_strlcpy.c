#include <stdio.h>
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	while (src[count] != '\0')
		++count;
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (count);
}
int main(void)
{
	char src[10]	= "ab121";
	char dest[10]	= "12123123";

	size_t 			nb = 8;
	unsigned int 	nb2 = 8;
	printf("Str: %u", ft_strlcpy(dest, src, nb2));
	return (0);
}
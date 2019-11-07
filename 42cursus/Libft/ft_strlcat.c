#include <stdio.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res;

	i = 0;
	while (dest[i] != '\0')
		++i;
	res = 0;
	while (src[res] != '\0')
		++res;
	if (size <= i)
		res += size;
	else
		res += i;
	j = 0;
	while (src[j] != '\0' && i + 1 < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (res);
}

int main()
{
	char src[10]	= "ab121";
	char dest[10]	= "12123123";

	size_t 			nb = 8;
	unsigned int 	nb2 = 8;
	printf("Str: %u", ft_strlcat(dest, src, nb2));
	return (0);
}
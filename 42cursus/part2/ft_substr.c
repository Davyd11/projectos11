#include <stdio.h>
#include <stdlib.h>
char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *src;
	int i;
	int n;

	n = 0;
	while (s[n] != '\0') /* Size string*/
	{
		n++;
	}
	if (!(src = malloc(sizeof(char) * (n + 1)))) /* WHY THE  EXCLAMATION SIGN*/
		return (NULL);
	i = 0;
	while (start <= len) /*From number start to len*/
	{
		src[i] = s[start];
		i++;
		start++;
	}
	src[i] = '\0';
	return (src);

}
int main ()
{
	char source[] = {"holadavidend"};

	printf("%s", ft_substr(source, 4, 8));
}
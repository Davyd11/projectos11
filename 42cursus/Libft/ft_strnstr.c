#include  <stdio.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	unsigned int pos;
	unsigned int i;

    pos = 0;
	if (!*to_find)
		return ((char*)str);
        
	while (str[pos] != '\0' && (size_t)pos < len)
	{
		if (str[pos] == to_find[0])
		{
			i = 1;
			while (to_find[i] != '\0' && str[pos + i] == to_find[i] &&
					(size_t)(pos + i) < len)
				++i;
			if (to_find[i] == '\0')
				return ((char*)&str[pos]);
		}
		++pos;
	}
	return (0);
}
int main(void) {
    char *searchingFor = "it";
    char *in = "la da\ndoo a da\nnow here comes the stack\nok there it was.\n";

    printf("found: %s\n", ft_strnstr(in, searchingFor, 80) ? "yes" : "no");
    printf("found: %s\n", ft_strnstr(in, searchingFor, 5) ? "yes" : "no");
    printf("found: %s\n", ft_strnstr(in, searchingFor, 5) ? "yes" : "no");
    return 0;
}
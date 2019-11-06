#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	c2;
	int				i;

	i = 0;
	c2 = (unsigned char)c; // If the data is unknown we use unsigned so it takes the one will be use in the future
	ptr = (unsigned char *)s;
	while (n--) // loop until the value trn into NULL
	{
		if (ptr[i] == c2)
			return (ptr + i); // will show the string in the position it reachead to the end
		i++;
	}
	return (NULL);
}

int main ()
{
   const char fra[] = "pero que dices. Eres un crack";
   const char ch = '.';
   char *ret;

   ret = ft_memchr(fra, ch, 90);

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}
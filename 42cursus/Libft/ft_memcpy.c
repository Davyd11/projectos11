#include <stdio.h>
#include <stdlib.h>
void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char	*ptr;
    const char    *rtp;
	ptr = dest;
    rtp = src;
	while (dest++ != '\0')
	{
		*ptr = *rtp;
		ptr++;
        rtp++;
	}
	return(dest);
}
int main ()
{
	const char pepe[50] = {"Muy bien y tuu ?"};
	char hola[50] = {"hola que tal ???"} ;
	
	ft_memcpy(hola, pepe, sizeof(char)*3);
	printf("%d, %d, %d",hola[0], hola[1], hola[2]);
	
}

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*ptr;
	const unsigned char	*ptr2;

	ptr = (unsigned char*)dst; //creo  dos varables para poder modificar los parametros dados
	ptr2 = (unsigned char*)src;
	i = 0;
	if (ptr2 < ptr)
		while (++i <= len)
			ptr[len - i] = ptr2[len - i];
	else
		while (len-- > 0)
			*(ptr++) = *(ptr2++); //
	return (dst);
}
int main ()
{
    char dst[] = {"Dani"};
    char src[] = {"David"};

    ft_memmove(dst, src, sizeof(char)*5);

    printf("%s", dst);
}
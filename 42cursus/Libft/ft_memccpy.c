#include <stdio.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;

	ptr_dst = (unsigned char*)dst;
	ptr_src = (unsigned char*)src;
	i = 0;
	while (i < n)
	{
		ptr_dst[i] = ptr_src[i];
		if (ptr_dst[i] == (unsigned char)c)
			return ((void*)(dst + i + 1));
		++i;
	}
	return (NULL);
}

int main( void ) {
    char string1[60] = "Taj Mahal is a historic monument in India.";
    char buffer[61];
    char *pdest;
    printf( "Function: _memccpy 42 characters or to character 'c'\n" );
    printf( "Source: %s\n", string1 );
    pdest = ft_memccpy( buffer, string1, 'c', 42);
    *pdest = '\0';
    printf( "Result: %s\n", buffer );
    printf( "Length: %lu characters\n", strlen( buffer ) );
}

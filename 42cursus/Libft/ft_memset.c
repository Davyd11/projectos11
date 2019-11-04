#include <stdlib.h>
void	*ft_memset(void *b ,int c, size_t len)
{
	char	*ptr;

	if (b == NULL)
	{
		return(NULL);
	}

	ptr = b;
	while (len-- > 0)
	{
		*ptr = c;
		ptr++;
	}
	return(b);
}
int main (){}
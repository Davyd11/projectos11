#include <stdlib.h>
void	*ft_bzero(void *b, size_t len)
{
	char *ptr;
	while (len-- > 0)
	{
		*ptr = 0;
		ptr++;
	}
	return(b);
}
int main(){}

#include <stdio.h>


int ft_tolower(int ch)
{
	int n;

	n = 0;
	if ((ch > 64)&&(ch < 91))
	{
		return(ch+32);
	}
	else
	{
		return(ch);
	}
}
int main()
{
	putchar(ft_tolower('H'));
}
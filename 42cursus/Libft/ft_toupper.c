#include <stdio.h>


int ft_toupper(int ch)
{
	int n;

	n = 0;
	if ((ch > 96)&&(ch < 173))
	{
		return(ch-32);
	}
	else
	{
		return(ch);
	}
}
int main()
{
	ft_toupper('h');
}
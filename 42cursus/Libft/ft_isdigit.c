#include <stdio.h>

int ft_isdigit(int c)
{
    if ((c < 58) && (c > 47))
    {
        return(1);
    }
    else
    {
        return(0);
    }
}
int main ()
{
    printf("%d",ft_isdigit('9'));
}
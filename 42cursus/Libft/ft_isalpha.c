#include <stdio.h>

int ft_isalpha(int c)
{
    if ((c < 123) && (c > 96))
    {
        return(1);
    }
    else if ((c < 91) && (c > 64))
    {
        return(2);
    }
    else
    {
        return(0);
    }
}
int main ()
{
    printf("%d",ft_isalpha('Z'));
}
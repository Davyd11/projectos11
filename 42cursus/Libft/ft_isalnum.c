#include <stdio.h>

int ft_isalnum(int c)
{
    if ((c < 123) && (c > 96))
    {
        return(1);
    }
    else if ((c < 91) && (c > 64))
    {
        return(2);
    }
    else if ((c < 58) && (c > 47))
    {
        return(3);
    }
    else
    {
        return(0);
    }
}
int main ()
{
    printf("%d",ft_isalnum('z'));
    printf("%d",ft_isalnum('Z'));
    printf("%d",ft_isalnum('1'));
    printf("%d",ft_isalnum(')'));
}
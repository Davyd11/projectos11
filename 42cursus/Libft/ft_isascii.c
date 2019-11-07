#include <stdio.h>
int ft_isascii(int c)
{
    if ((c > 0) && (c < 127))
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
    printf("%d",ft_isascii('z'));
    printf("%d",ft_isascii('Z'));
    printf("%d",ft_isascii('1'));
    printf("%d",ft_isascii('9'));
}
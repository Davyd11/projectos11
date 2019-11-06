#include <stdio.h>

int ft_isprint(int c)
{
    if ((c < 127) && (c > 31))
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
    printf("%d",ft_isprint('z'));
    printf("%d",ft_isprint('Z'));
    printf("%d",ft_isprint('1'));
    printf("%d",ft_isprint(""));
}
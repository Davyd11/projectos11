#include <stdio.h>

int ft_atoi(const char *str)
{
    int p;
    int n;

    n = 0;
    p = 0;
    while (str[n] != '\0')
    {
        if((str[n] < 58)&&(str[n] > 47))
        {
            p = (p * 10) + (str[n] - '0');
            n++;
        }
        else 
            return(0);
    }
    return(p);
}
int main ()
{
    char src[] = "10";
    printf("%d",ft_atoi(src));
}
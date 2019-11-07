#include <stdio.h>

int ft_atoi(const char *str)
{
    int p;
    int n;
    int nega;

    n = 0;
    p = 0;
    nega = 0;
    while (str[n] != '\0')
    {
        if((str[n] < 58)&&(str[n] > 47))
        {
            p = (p * 10) + (str[n] - '0');
            n++;
        }
        else if ((str[0] == 45) && ((str[1] != 45) || (str[1] != 43)))
        {
            nega++;
            n++;
        }
        else if(str[0] == 43)
            n++;
        else 
            return(0);
    }
    if (nega > 0)
        return((p)*(-1));
    else
        return(p);
}
int main ()
{
    char src[] = "123456789";
    printf("%d",ft_atoi(src));
}
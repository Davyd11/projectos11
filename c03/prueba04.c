#include<stdio.h>
char *ft_strstr(char *str, char *to_find)
{
    int n;
    int j;

    n = 0;
    j = 0;
    while (str[n] != '\0')
    {
        if (str[n] == to_find[j])
        {
            while (str[n] == to_find[j])
            {
                return (&str[n]);
                n++;
                j++;
            }
        }
    }n++;
}

int main ()
{
    printf("%s", ft_strstr("estamos", "como estamos aqui"));
}
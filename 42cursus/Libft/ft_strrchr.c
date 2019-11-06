#include <stdio.h>

void *ft_strrchr(char* str, int character)
{
    int p;
    int n;

    n = 0;
    p = -1;
    while (str[n] != '\0')
    {
        if (str[n] == character)
        {
            p = n;
        }
        n++;
    }
    if (p  == -1)
    {
        return (NULL);
    }
    return (p);
}
int main ()
{
    char caracter = 'i';
    char string[] = "hola que tal estamos";
    printf ("%d", ft_strrchr(string, caracter));
}
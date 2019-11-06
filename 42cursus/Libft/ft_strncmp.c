#include <stdio.h>
int ft_strncmp(char *str1, char *str2, int n)
{
    int uno;

    uno = 0;
    while (str1[uno] != '\0' && str2[uno] != '\0' && str1[uno] == str2[uno] && (uno < n - 1))
    {
        uno++;
    }
    return(str1[uno] - str2[uno]);
}
int main ()
{
    char primer[] = {"b"};
    char segun[] = {"a"};
    /*printf("%d", primer[0]);*/
    printf("%d", ft_strncmp(primer, segun, 4));
}
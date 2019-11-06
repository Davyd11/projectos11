#include <stdio.h>

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    int resul;
    int p;
    unsigned char *s1;
    unsigned char *s2;

    p = 0;
    resul = 0;
    s1 = (unsigned char *)str1;
    s2 = (unsigned char *)str2; // I had to create two variables, I´cant use them directly or no hith my knowlege

    while (n--)
    {
        resul += ((s1[p]) - (s2[p]));
        p++;
    }
    return(resul);
}

int main()
{
    char str1[15] = {"b"};
    char str2[15] = {"a"};
    int ret;

    ret = ft_memcmp(str1, str2, 5);
    printf("%d", ret);
}
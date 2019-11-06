#include <stdio.h>						/*LIBRARY UNEEDED, DELETE AFTER TESTING*/
int    ft_strlen(const char *str)
{
    int num;

    num = 0;
    while(str[num] != '\0')
    {
        num++;
    }
    return(num);
}
int main()								/*DELETE MAIN AFTER TESTING*/
{
    printf("%d",ft_strlen(""));
}
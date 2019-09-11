#include <stdio.h>

void    ft_rev_int_tab(int* tab, int size)
{
    int n;
    int x[size];

    n = size;
    while (n >= 0)
    {
        printf("%d", &(tab[size]));
        //x[n] = 
        n--;
        
    }
}

int main (void)
{
    ft_rev_int_tab(123, 3);
}
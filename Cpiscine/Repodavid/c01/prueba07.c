#include <stdio.h>

void    ft_rev_int_tab(int* tab, int size)
{
    int n;
    int x[size];
    int cero;

    cero = 0;
    n = size;
    while (n >= 0)
    {
        x[n - 1] = tab[cero];
        cero++;
        n--;
        
    }
    printf("%d", x[0]);
    printf("%d", x[1]);
    printf("%d", x[2]);
}

int main (void)
{
    int c[3] = {1, 2, 3};
    ft_rev_int_tab(c, 3);
}
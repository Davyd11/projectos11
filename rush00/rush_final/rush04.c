#include <unistd.h>
#include "ft_putchar.c"

int top, mid, mid_, base = 0;

void lateral (x, y, mid, mid_)//crea el lateral ********************************************
{ 
    while (mid < y-2 && y > 1){ 
            ft_putchar('\n');
            ft_putchar('B');
            while (mid_ < x - 2)
            {
                ft_putchar(' ');
                mid_++;
            }
            if (x > 1)
            {
                ft_putchar('B');
            }
            mid_ = 0;
            mid++;
        }
}

void suelo(y, base, x) //escribe la linea del suelo *******************************************
{
    if (y > 1)
    {
        ft_putchar('\n');
        ft_putchar('C');
        while (base < x - 2 && y > 1)
        {
            ft_putchar('B');
            base++;
        }
        if (y > 1 && x > 1) // escribe la A del final de la base solo si y es mayor que 1
        {
            ft_putchar('A');
        }   
    }
}

void tapa (x, top) // crea la tapa de arriba ****************************************************
{
    while (top < x - 2 && x > 1) 
    {
        ft_putchar('B');
        top++;
    }
    if (x > 1) // escribe la C del final solo si x es mayor que 1
        {
            ft_putchar('C');
        }

}

void rush(x, y)
{
    ft_putchar('A');

    tapa(x, top);
    
    lateral (x, y, mid, mid_);

    suelo(y, base, x);


}
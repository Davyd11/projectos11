#include<stdio.h>

int suma1(char *s1) // va sumando cada valor del parametro con el codigo ascii y lo almacena en la varable uno
{
    int uno;
    int n;

    n = 0;
    uno = 0;
    while (s1[n] != '\0')
    {
        uno = uno + s1[n];
        n++;
    }
    //printf("%d ", uno);
    return (uno);

}

int suma2(char *s2) // suma cada valor del parametro s2 y lo va alamcenando en la variable dos
{
    int dos;
    int n;

    n = 0;
    dos = 0;
    while (s2[n] != '\0') //que recorra todos los caracteres
    {
        dos = dos + s2[n];
        n++;
    }
    //printf("%d", dos);
    return (dos);

}

int ntft_strcmp(char*s1,char*s2)
{
    suma1(s1);
    suma2(s2);
    printf("%d ", suma1);
    printf("%d", suma2);

    if (suma1 > suma2) // comprueba cual es mayor que cual 
    {
        return(1); // si la primera es mayor retorna un 1 si no un -1
    }
    else if (suma1 < suma2) 
    {
        return(-1);
    }
}

int main (void)
{
    printf("%d", ntft_strcmp("a", "a"));
}
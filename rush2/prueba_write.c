#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int main ()
{
    int ar;
    int p;
    char buf[99];
    
    ar = open("leer.txt", O_RDONLY);

    p = read(ar, buf, 12);
    buf[12] = '\0';
    printf ("%c", buf[]);
}` 
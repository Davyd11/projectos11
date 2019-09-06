#include <stdio.h>
#include <unistd.h>

void ft_print_numbers(void){
    char* c = "0123456789";
    int n = 0;
    while ( n <= 9){
        write (1, &c[n], 1);
        n++;
    }
}
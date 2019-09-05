#include <stdio.h>
#include <unistd.h>

void ft_print_numbers(void){
    int c;
    for (c = 0; c <= 9; c++){
        write (1, &c, 1);
    }
}

int main(){ft_print_numbers();}
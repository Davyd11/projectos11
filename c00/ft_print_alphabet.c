#include <stdio.h>
#include <unistd.h>

void ft_print_alphaber(void){
    char c = 'a';
    while (c < 'z'){
        write(1, &c, 1);
        c++; 
    }
} 
int main(){ft_print_alphaber();}
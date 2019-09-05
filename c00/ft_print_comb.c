#include <stdio.h>
#include <unistd.h>

void ft_print_numbers(void){
    int i, j, k;
    for (i = 0; i <= 9; i++) {
        for (j = i+1; j <= 9; j++) {
            for (k = j+1; k <= 9; k++) {
                printf("%d%d%d, ", i, j, k); // (it can't be use de function printf, so we must use write instead.) 
                                            //  Works but creates a comma and a space at the end !!!!
            }
        }
    }
}

int main(void){ft_print_numbers();}
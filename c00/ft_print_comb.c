
#include <unistd.h>

void ft_print_numbers(void){
    int i, j, k;
    char space = ' ';
    char* n = "0123456789";
    while (i <= 9) {
        j = i+1;
        while (j <= 9){
            k = j+1;
            while ( k <= 9) {
                write(1,&n[i],1);
                write(1,&n[j],1); 
                write(1,&n[k],1);
                write(1,", ",1);
                write(1,&space,1);
                k++;
            }
            j++;
        }
        i++;
    }
}
#include <unistd.h>

void rush(x, y){
    
    int top, mid, base, mid_;

    top, mid, base, mid_ = 0;
   
    write (1, "A", 1);
    while (top < x - 1 && x > 1){
        write (1, "B", 1);
        top++;
    }
    write (1, "C", 1);
    write (1, "\n", 1);        
    while (mid < y - 1 && y > 1){
        write(1, "B", 1);
        while (mid_ < y){
            write(1, " ",1);
            mid_++;
        }
        write(1, "B", 1);
        write(1 , "\n", 1);
        mid_ = 0;
        mid++;
    }
    //empice de la base
    write (1, "C", 1);
    while (base < x - 1 && y > 1){
        write (1, "B", 1);
        base++;
    }
    write (1, "A", 1);

}
int main (){rush(1,5);}
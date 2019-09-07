#include <unistd.h>

void rush(x, y){
    
    int top, mid, mid_, base = 0;

    write(1,"A",1);

    while (top < x - 2 && x > 1) // crea la tapa de arriba 
    {
        write (1, "B", 1);
        top++;
    }
    if (x > 1) // escribe la C del final solo si x es mayor que 1
        {
            write(1,"C",1);
        }
    
 
    while (mid < y-2 && y > 1){ //crea el lateral 
        write(1,"\n",1);
        write(1,"B",1);
        while (mid_ < x - 2)
        {
            write(1," ",1);
            mid_++;
        }
        if (x > 1)
        {
            write(1,"C",1);
        }
        mid_ = 0;
        mid++;
    }
    
    if (y > 1)
        {
            write(1,"\n",1);
            write(1,"C",1);
            while (base < x - 2 && y > 1)
            {
                write (1, "B", 1);
                base++;
            }
            if (y > 1 && x > 1) // escribe la A del final de la base solo si y es mayor que 1
            {
                write(1,"A",1);
            }   
        }

}
int main (){rush(5,1);}  
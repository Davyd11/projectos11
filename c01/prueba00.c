#include <unistd.h>
#include <stdio.h>




int main()
{
   char *b = "9";
   write(1,&b[0],1);
   printf("%d", *b);
} 
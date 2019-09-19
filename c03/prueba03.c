#include <stdio.h>

int main(int c, char **text)
{
    printf("%s", *(text+1));
}
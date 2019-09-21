#include <stdio.h>

/*int main(int c, char **text)
{
    printf("%s", text[1]);
}
*/

int main()
{
	int *n;
	//int a = (int*) malloc(n*sizeof(int));
	int a = 9;
    n = a;
	printf("%d", n[0]);
}
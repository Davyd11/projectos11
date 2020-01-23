#include <stdio.h>

int main (int argc, char **argv)
{
	if(argc > 1)
	{
		printf("%d",argc);
	}
	printf("%s", argv[1]);
}
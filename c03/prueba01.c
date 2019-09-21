#include<stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int count;

	count = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[count] == s2[count] && s1[count] != '\0' && s2[count] != '\0' && count < n - 1)
	{
		count++;
	}
	/*while (s2[count] != '\0' && count < n - 1)
	{
		count++;
	}*/
	return (s1[count] - s2[count]);
}

int main()
{
<<<<<<< HEAD
    int result;

    // comparing strings str1 and str2
    result = ft_strncmp("asdf", "asdf", 4);
    printf("strcmp(str1, str2) = %d\n", result);

    // comparing strings str1 and str3
    result = ft_strncmp("asde", "asdf", 4);
    printf("strcmp(str1, str3) = %d\n", result);
    
    result = ft_strncmp("asdg", "asdf", 4);
    printf("strcmp(str1, str3) = %d\n", result);
    
    result = ft_strncmp("asdf", "asdf", 3);
    printf("strcmp(str1, str3) = %d\n", result);

    result = ft_strncmp("asde", "asdf", 3);
    printf("strcmp(str1, str3) = %d\n", result);
    
    return 0;
}
=======
	char p[] = {"hola"};
	char j[] = {"David"};

	printf(ft_strncmp());//saber funcionamiento y ver como hacer llamada a accion
}
>>>>>>> 5e1b4bb15612ebd60ac0e4ed37500fbb6ad14348

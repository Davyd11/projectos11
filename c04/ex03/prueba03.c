#include <stdio.h>
#include <stdlib.h>

void bucle2(char *str, int i, int sali)
{
    while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
    {
        sali = sali * 10;
        sali += (int)str[i] - '0';
        i++;
    }
}

int     ft_atoi(char *str)
  {
      int sali;
      int menos;
      int i;
 
      sali = 0;
      menos = 0;
      i = 0;
 
      while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v') || (str[i] == '\r') || (str[i] == '\f'))
          i++;
      if (str[i] == '-')
          menos = 1;
	 	  bucle2(str, i, sali);
          if (menos == 1)
             return (-sali);
          else
             return (sali);
  }
int main()
{
	printf("ft_atoi: %d\n", ft_atoi("123456"));
	printf("atoi: %d\n", atoi("123456"));
	printf("ft_atoi: %d\n", ft_atoi("12Three45678"));
	printf("atoi: %d\n", atoi("12Three45678"));
	printf("ft_atoi: %d\n", ft_atoi("Hello World!"));
	printf("atoi: %d\n", atoi("Hello World!"));
	printf("ft_atoi: %d\n", ft_atoi("+42 BLAH!"));
	printf("atoi: %d\n", atoi("+42 BLAH!"));
	printf("ft_atoi: %d\n", ft_atoi("-42"));
	printf("atoi: %d\n", atoi("-42"));
	printf("ft_atoi: %d\n", ft_atoi("     +42"));
	printf("atoi: %d\n", atoi("     +42"));
	printf("ft_atoi: %d\n", ft_atoi("\t\n\v\f\r 42"));
	printf("atoi: %d\n", atoi("\t\n\v\f\r 42"));
    
    return 0;
}

/*void bucle2(char *str, int i, int sali)
{
    while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
    {
        sali = sali * 10;
        sali += (int)str[i] - '0';
        i++;
    }
}

int     ft_atoi(char *str)
  {
    int sali;
    int menos;
    int i;

    sali = 0;
    menos = 0;
    i = 0;

    while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v') || (str[i] == '\r') || (str[i] == '\f'))
        i++;
    if (str[i] == '-')
    {
        menos = 1;
        bucle2(str, i, sali);
        if (menos == 1)
        {
            return (-sali);
        }
        else
        {
            return (sali);
        }
    }
}*/
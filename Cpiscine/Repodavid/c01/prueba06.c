int ft_strlen(char *str)
{
    int n;
    int count;

    count = 0;
    n = 0;
    while (str[n] != '\0')
    {
        count++;
        n++;
    }
    return (count);
}
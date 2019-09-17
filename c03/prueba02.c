char *ft_strcat(char *dest, char *src) //el funcionamiento tiene que(introducir las variables en un array que declares como destino)
{
    int n;
    int j;

    n = 0;
    j = 0;
    while (src[n] != '\0')
    {
        n++;
    }
    while (src[j] != '\0')
    {
        dest[n] = src[j];
        j++;
        n++;
    }
    return (dest);
}
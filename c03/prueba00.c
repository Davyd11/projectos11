int ntft_strcmp(char* s1,char* s2)
{
    int n;

    n = 0;
    while (s1[n] != '\0' && s2[n] != '\0')
    {
        if (s1[n] != s2[n])
        {
            return(s1[n] - s2[n]);
        }
        n++;
    }
}
#include    <stdio.h>
#include    <stdlib.h>
#include    <unistd.h>

char    **ft_split(char *s)
{
    int a;
    int b;
    int c;
    char    **split;

    a = 0;
    b = 0;
    split = malloc(sizeof(char)* 10000);
    while (s[a] == ' ' || s[a] == '\n' || s[a] == '\t')
        a++;
    while (s[a])
    {
        if (s[a] > 32)
        {
            c = 0;
            split[b] = malloc(sizeof(char) * 10000);
            while (s[a] > 32)
            {
                split[b][c] = s[a];
                c++;
                a++;
            }
            split[b][c] = '\0';
            b++;
        }
        else
            a++;
    }
    split[b] = NULL;
    return (split);
}
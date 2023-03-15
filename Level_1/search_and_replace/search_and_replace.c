#include    <unistd.h>

void    ft_search_and_replace(char *str, char search, char replace)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] == search)
            write(1, &replace, 1);
        else
            write(1, &str[i], 1);
        i++;
    }
}


int main(int ac, char **av)
{
    if (ac == 4)
        if (av[2][1] == '\0' && av[3][1] == '\0')
            ft_search_and_replace(av[1], av[2][0], av[3][0]);
        write(1, "\n", 1);
}

/*
bu program girdi olarak verilen stringe ek olarak değiştirmek istediğimiz karakteri
belirterek mesela müzik kelimesinin ü u i ı yaptırıyor.
*/
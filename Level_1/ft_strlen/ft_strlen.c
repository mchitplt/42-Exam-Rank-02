int ft_strlen(char *str)
{
    int i = 0;

    while(str[i])
        i++;
    return (i);
}

/*
Bu fonksiyon Elimizde bulunan
Stringin Kaç karakterli olduğunu bize tam sayı olarak
Geri döndürüyor.
*/
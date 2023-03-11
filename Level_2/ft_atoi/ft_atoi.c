int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sign);
}

/*
BU Fonksiyon 'da, önce boşluk karakteri içermeyen ilk karakteri bulana kadar boşluk atıyoruz.
Daha sonra, bu karakterden başlayarak, 
int değer içeriğine benzeyen karakterleri sayısal değerlere çeviririz.
Karakter dizisindeki son geçerli karakterden sonraki karakterler dikkate alınmaz.
*/
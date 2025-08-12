#include "libft.h"

static int	number_length(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		i;
	long	aux;
	char	*ptr;

	i = number_length(n);
	aux = n;
	ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (!ptr)
		return (NULL);
	ptr[i--] = '\0';
	if (aux < 0)
	{
		ptr[0] = '-';
		aux *= -1;
	}
	if (aux == 0)
		ptr[i] = '0';
	while (aux)
	{
		ptr[i--] = (aux % 10) + '0';
		aux /= 10;
	}
	return (ptr);
}

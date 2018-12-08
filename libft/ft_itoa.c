#include "libft.h"

long int	abs_int(long int n)
{
	if(n < 0)
		return (-n);
	else
		return (n);
}

static int	int_len(int n)
{
	int len;

	len = 0;
	if(n <= 0)
		len = 1;
	else
		len = 0;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char        *str;
	int			len;
	int			sign;

	len = int_len(n);
	if(n < 0)
		sign = -1;
	else
		sign = 1;
	str = ft_strnew(len);
	if(!str)
		return (0);
	str[len] = '\0';
	len = len - 1;
	while (len >= 0)
	{
		str[len] = abs_int(n % 10) + '0';
		n /= 10;
		len--;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}

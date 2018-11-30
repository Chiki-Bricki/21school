#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char *s1;
	unsigned char *s2;
	size_t i;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	i = -1;
	while(++i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return(0);
}

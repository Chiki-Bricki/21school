#include "libft.h"

char *ft_strcpy(char *s1, const char *s2)
{
	int i;

	i = -1;
	while (s2[++i])
		s1[i] = s2[i];
	return (s1);
}

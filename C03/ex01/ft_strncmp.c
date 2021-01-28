#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int i)
{
	unsigned int n;

	n = 0;
	while ((s1[n] && s2[n]) && (n < (i - 1)))
	{
		n++;
	}
	return (s1[n] - s2[n]);
}

int	main(void)
{
	char a[] = "holaee";
	char b[] = "hola";

	printf("%d", ft_strncmp(a, b, 5));

	return (0);
}

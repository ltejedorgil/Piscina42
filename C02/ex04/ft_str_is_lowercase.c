#include <stdio.h>
#include <stdlib.h>

int	ft_str_is_alpha(char *str)
{
	int n;
	int c;

	n = 0;
	c = 0;
	while (str[n] != '\0') 
	{
		if(('a' <= str[n]) && (str[n] <= 'z'))
		{
			c = 1;
		}
		else
		{
			c = 0;
			return (c);
		}
		n++;
	}
	c = 1;
	return (c);
}

int	main(void)
{
	char *a;

	a = (char *)malloc(10 * sizeof(char));

	a = "mn";
	printf("%d",ft_str_is_alpha(a));
	return (0);
}

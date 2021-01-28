#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char    *ft_strupcase(char *str)
{
	int n;

	n = 0;

	while (str[n] != '\0')
	{
		if((65 <= str[n]) && (str[n] <= 90))
		{
			str[n] = str[n] + 32;
		}
		else
		{
            return (str);
		}
		n++;
	}
	return (str);
}

int	main(void)
{
	char *a;

	a = (char *)malloc(5 * sizeof(char));

    strcpy(a, "Hol12a");
	printf("%s",ft_strupcase(a));
	return (0);
}

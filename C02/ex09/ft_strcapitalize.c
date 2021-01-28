#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char    *ft_strcapitalize(char *str)
{
	int n;

	n = 0;

	while (str[n] != '\0')
	{
		
        if(n == 0) 
        {
            if(str[n] >= 97 && str[n] <= 122 )
            {
            str[n] = str[n] - 32;
            }
        }
        if (str[n] >= 65 && str[n] <= 90)
        {
            str[n] = str[n] + 32;
        }
        if(((str[n-1] < 65 || str[n - 1] > 90) &&
        (str[n-1] < 97 || str[n-1] > 122)) && (str[n-1] < 48 || str[n-1] > 57))
        {
            if(str[n] >= 97 && str[n] <= 122 )
            {
                 str[n] = str[n] - 32;
            }
        }
        n++;
	}
	return (str);
}

int	main(void)
{
	char a[] = "/salUt, comMent tu vas ? 42mots quarante-deux; cinquAnte+et+un";

	printf("%s",ft_strcapitalize(a));
	return (0);
}

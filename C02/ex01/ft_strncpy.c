#include <unistd.h>
#include <stdio.h>

char    ft_strncpy(char *dest, char *src)
{
    int n;

    n = 0;
    while (src[n] != '\0')
    {
        dest[n] = src[n];
        n++;
    }
    dest[n] = '\0';
    return (*dest);
}

int main(void)
{
char a[] = "Que dice mi pana"; 
char b[] = "mi primo";

ft_strcpy(b, a);
printf("%s", b);
}

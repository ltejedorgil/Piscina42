/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltejedor <ltejedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 19:06:10 by ltejedor          #+#    #+#             */
/*   Updated: 2020/12/13 18:24:00 by ltejedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int n;
	int i;
	int aux;

	n = 0;
	i = 0;
	while (str[n] != '\0')
	{
		if (str[n] == to_find[i])
		{
			return (&str[n]);
		}
		n++;
	}
	return (0);
}

int main(void)
{
	char a[] = "abcde";
	char b[] = "c";

	printf("%s", ft_strstr(a ,b));
	return(0);
}

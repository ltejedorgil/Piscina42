/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltejedor <ltejedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 11:21:56 by ltejedor          #+#    #+#             */
/*   Updated: 2020/12/13 18:29:27 by ltejedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
{
	int n;
	int i;
	int aux;
    int size;

	n = 0;
	i = 0;
	while (str[n] != '\0')
	{
		if (str[n] == to_find[i])
		{
			//aux = n;
			while (to_find[i] != '\0')
			{
				if (str[n] != to_find[i])
				{
					return (0);
				}
				i++;
				n++;
			}
			return (str + aux);
		}
		n++;
	}
	return (0);
}

int main(void)
{
	char a[] = "hola que tal";
	char b[] = "que";

	printf("%s", ft_strlcat(a ,b, 5));
	return(0);
}

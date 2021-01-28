/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltejedor <ltejedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 14:45:39 by ltejedor          #+#    #+#             */
/*   Updated: 2020/12/09 17:14:36 by ltejedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char *ptr;
	int n;
	int j;

	n = 0;
	j = 0;

	while (dest[n] != '\0')
	{
		n++;
	}

	while (src[j] != '\0')
	{
		dest[n] = src[j];
		n++;
		j++;
	} 
	dest[n] = '\0';
	return (dest);
}

int main(void)
{
	char a[] = "hola";
	char b[] = "mellamoluis";

	printf("%s", ft_strcat(a, b));
}

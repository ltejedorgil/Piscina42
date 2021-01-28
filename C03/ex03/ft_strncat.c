/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltejedor <ltejedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:16:18 by ltejedor          #+#    #+#             */
/*   Updated: 2020/12/09 18:59:04 by ltejedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int n;
	int j;

	n = 0;
	j = 0;

	while (dest[n] != '\0')
	{
		n++;
	}

	while ((src[j] != '\0') && (j < nb))
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

	printf("%s", ft_strncat(a, b, 5));
}

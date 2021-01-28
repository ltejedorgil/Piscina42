/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltejedor <ltejedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 12:21:52 by ltejedor          #+#    #+#             */
/*   Updated: 2020/12/09 19:48:33 by ltejedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int n;

	n = 0;
	while (((s1[n] == s2[n]) && (s1[n] != '\0')) && (s2[n] != '\0')) 
	{
		n++;
	}
	return (s1[n] - s2[n]);
}

int	main(void)
{
	char a[] = "hol";
	char b[] = "hola";

	printf("%d", ft_strcmp(a, b));

	return (0);
}

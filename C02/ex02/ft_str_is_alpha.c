/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltejedor <ltejedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 09:28:43 by ltejedor          #+#    #+#             */
/*   Updated: 2020/12/08 14:13:16 by ltejedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
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
		if(((('a' <= str[n]) && (str[n] <= 'z')) || (('A' <= str[n]) && (str[n] <= 'Z'))))
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

	a = "";
	printf("%d",ft_str_is_alpha(a));
	return (0);
}

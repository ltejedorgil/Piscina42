/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltejedor <ltejedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/03 19:34:27 by ltejedor          #+#    #+#             */
/*   Updated: 2020/12/07 10:18:06 by ltejedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str)
{
	int contador;

	contador = 0;

	while (*str != '\0')
	{
		str++;
		contador++;
	}
	return (contador);
}


int main(void)
{
	char* a;

	a = "hola";
	ft_strlen(a);
	return(0);
}

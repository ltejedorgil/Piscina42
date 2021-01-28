/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltejedor <ltejedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 19:15:41 by ltejedor          #+#    #+#             */
/*   Updated: 2020/12/04 13:06:16 by ltejedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int aux;

	aux = *a;

	*a = (*a / *b);
	*b = (aux % *b);
}

int main(void)
{
	int a;
	int b;

	a = 10;
	b = 2;

	ft_ultimate_div_mod(&a, &b);
	printf("%d\n", a);
	printf("%d", b);
	return(0);
}

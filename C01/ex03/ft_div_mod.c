/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltejedor <ltejedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 16:33:53 by ltejedor          #+#    #+#             */
/*   Updated: 2020/12/04 12:22:00 by ltejedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 10;
	b = 5;

	ft_div_mod(a, b, &div, &mod);
	printf("%d\n", div);
	printf("%d", mod);
}

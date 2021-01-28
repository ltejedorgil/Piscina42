/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltejedor <ltejedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 11:37:34 by ltejedor          #+#    #+#             */
/*   Updated: 2020/12/07 15:27:31 by ltejedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int n;
	int j;
	int aux;

	n = 0;
	j = 1;
	
	while (n < size/2) 
	{
		aux = tab[n];
		tab[n] = tab[size -j];
		tab[size -j] = aux;
		n++;
		j++;

	}
	
}

int main(void)

{
  int size;
  int a[5];

  a[0] = 1;
  a[1] = 2;
  a[2] = 3;
  a[3] = 4;
  a[4] = 5;

  size = 5;
  ft_rev_int_tab(a, size);
  printf("%d, %d, %d, %d, %d", a[0], a[1], a[2], a[3], a[4]);
	
}

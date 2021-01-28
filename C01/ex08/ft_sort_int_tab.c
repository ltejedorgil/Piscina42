/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltejedor <ltejedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 11:38:51 by ltejedor          #+#    #+#             */
/*   Updated: 2020/12/07 11:41:55 by ltejedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_sort_int_tab(int *tab, int size)
{
  int n;

  n = size - 1;
    
      while (n >= 0)
      {
      tab[size - 1]);
      tab--;
      n--;
      }

}

int main(void)

{
  int a[5];
  int size;

  a[0] = 1;
  a[1] = 2;
  a[2] = 3;
  a[3] = 4;
  a[4] = 5;

  size = 5;

  ft_rev_int_tab(a, size);
}

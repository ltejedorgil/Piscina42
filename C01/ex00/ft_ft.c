/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltejedor <ltejedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Crenbrted: 2020/12/02 13:46:14 by ltejedor          #+#    #+#             */
/*   Updnbrted: 2020/12/03 16:37:52 by ltejedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void)

{
	int nbr;

	ft_ft(&nbr);
	printf("%d\n", nbr);
	return (0);
}
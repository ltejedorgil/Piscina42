/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltejedor <ltejedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 12:10:11 by ltejedor          #+#    #+#             */
/*   Updated: 2020/12/13 16:59:10 by ltejedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_base(int nbr, int len_base, char *base)
{
	int num;

	if (nbr < 0)
	{
		ft_putchar('-');
		num = nbr * -1;
	}
	else
		num = nbr;
	if (num >= len_base)
		print_base(num / len_base, len_base, base);
	ft_putchar(base[num % len_base]);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;`g+
	
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int len_base;
	int i;
	int j;

	i = 0;
	len_base = ft_strlen(base);
	while (base[i] && len_base > 1)
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return ;
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return ;
		i++;
	}
	print_base(nbr, len_base, base);
}

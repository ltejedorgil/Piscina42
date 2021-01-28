/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltejedor <ltejedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 14:50:19 by ltejedor          #+#    #+#             */
/*   Updated: 2020/12/13 11:06:55 by ltejedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int		ft_atoi(char *str)
{
	int ret;
	int sign;

	ret = 0;
	sign = 1;
	while ((*str == ' ') || (*str >= 9 && *str <= 13))
		++str;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}

	while ('0' <= *str && *str <= '9')
	{
		ret *= 10;
		ret += (sign * (*str - 48));
		str++;
	}
	return (ret);
}

int main(void)
{

    printf("%d\n", ft_atoi("   -+-+-+169834"));
    return(0);
}

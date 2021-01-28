/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltejedor <ltejedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 14:34:50 by ltejedor          #+#    #+#             */
/*   Updated: 2020/12/12 14:55:45 by ltejedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}


void ft_putstr(char *str)
{
    int n;

    n = 0;
    while (str[n] != '\0')
    {
        ft_putchar(str[n]);
        n++;
    }

}

int main(void)
{

    char a[] = "hola buenas";
    ft_putstr(a);
    return(0);
}
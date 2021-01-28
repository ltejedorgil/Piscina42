/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltejedor <ltejedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 11:46:44 by ltejedor          #+#    #+#             */
/*   Updated: 2020/12/12 14:26:57 by ltejedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
   int n;

   n = 0;
    while (str[n] != '\0')
    {
        n++;
    }
    return (n);
    
}

int main(void)
{
    char a[] = "hola";

    ft_strlen(a);

    return(0);
}

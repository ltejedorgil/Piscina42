/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltejedor <ltejedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 19:21:34 by ltejedor          #+#    #+#             */
/*   Updated: 2020/12/11 14:33:17 by ltejedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void ft_putstr(char *str)

{
    while (*str != '\0')
    {
         write(1, str, 1);
         str++;
    }
    
}

int main(void)

{
    char* a;

    a = "hola muy buenas\n";
   ft_putstr(a);
	
}


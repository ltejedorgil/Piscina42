/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_newline.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joguntij <joguntij@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 17:37:08 by joguntij          #+#    #+#             */
/*   Updated: 2019/12/08 12:56:58 by joguntij         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen_newline(char *str)
{
	int i;
	int ctd;

	i = 0;
	ctd = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			ctd++;
		i++;
	}
	return (ctd);
}

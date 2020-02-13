/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 21:04:58 by chakim            #+#    #+#             */
/*   Updated: 2020/01/26 21:18:20 by chakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void 	rush(int y, int x)
{
	int		 i;
	int 	j;
	
	i = 1;
	while (i <= x)
	{
		j = 1;
		while (j <= y)
		{
			if (i == 1 && j == 1)
				ft_putchar('A');
			else if ((i == 1 && j == y) || (j == 1 && i == x))
				ft_putchar('C');
			else if (i == x || j == y)
				ft_putchar('A');
			else if (i == 1 || i == x || j == 1 || j == y)
				ft_putchar('B');
			else
				ft_putchar(' ');
			j = j + 1;
		}
		i = i + 1;
		ft_putchar('\n');
	}
}

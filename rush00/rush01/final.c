/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 14:03:04 by chakim            #+#    #+#             */
/*   Updated: 2020/01/26 14:50:58 by chakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	 ft_putchar(char c);

void	 rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	while (i <= x)
	{
		j = 1;
		while (j <= y)
		{
			if ((i == 1 && j == 1) || (i == x && j == 1) || (i == 1 && j == y) || (i == x && j == y))
				ft_putchar('o');
			else if (i == 1 || i == x)
				ft_putchar('-');
			else if (j == 1 || j == y)
				ft_putchar('|');
			else
				ft_putchar(' ');
			j = j + 1;
		}
		i = i + 1;
		ft_putchar('\n');
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   real.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 14:53:13 by chakim            #+#    #+#             */
/*   Updated: 2020/01/26 15:31:40 by chakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c);

void rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	while (i <= x)
	{
		j = 1;
		while (j <= y)
		{
			if (i == 1 && j == 1)
				ft_putchar('/');
			else if ((i == x && j == 1) || (i == 1 && j == y))
				ft_putchar('\\');
			else if (i == x && j == y)
				ft_putchar('/');
			else if (i == 1 || i == x || j == 1 || j == y)
				ft_putchar('*');
			else
				ft_putchar(' ');
			j = j + 1;
		}
		i = i + 1;
		ft_putchar('\n');
	}
}

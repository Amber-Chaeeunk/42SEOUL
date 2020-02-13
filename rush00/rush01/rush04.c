/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/26 13:46:52 by chakim            #+#    #+#             */
/*   Updated: 2020/01/26 13:59:56 by chakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c);

void rush(void)
{
	int i;
	int j;

	i = 1;
	while (i <= 3)
	{
		j = 1;
		while (j <= 5)
		{
			if ((i == 1 && j == 1) || (i == 3 && j == 5))
				ft_putchar('A');
			else if ((i == 1 && j == 5) || (i == 3 && j == 1))
				ft_putchar('C');
			else if (i == 1 || i == 3 || j == 1 || j == 5)
				ft_putchar('B');
			else
				ft_putchar(' ');
			j = j + 1;
		}
		i = i + 1;
		ft_putchar('\n');
	}
}

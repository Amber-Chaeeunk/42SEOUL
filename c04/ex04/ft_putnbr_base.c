/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 16:13:40 by chakim            #+#    #+#             */
/*   Updated: 2020/02/06 20:15:09 by chakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check_base(char *base)
{
	int i;
	int j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
		if (base[i] == base[j])
			return (0);
		}
		if (base[i] == '\t' || base[i] == '\n' ||
				base[i] == '\v' || base[i] == '\f' ||
				base[i] == '\r' || base[i] == ' ')
			return (0);
		if (base[i] == '+' || base[i] == 'i')
			return (0);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	





	
	write (1, &base[i], 1);
}:

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 16:40:23 by chakim            #+#    #+#             */
/*   Updated: 2020/02/04 20:23:46 by chakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putnbr(int nb)
{
	if (nb <= 9 && nb >= 0)
		ft_putchar(nb + '0');
	else if (nb < 0 && nb != -2147483648)
	{
		ft_putchar('-');
		ft_putnbr(nb * (-1));
	}
	else if (nb == -2147483648)
	{	
		ft_putnbr(-2);
		ft_putnbr(147483648);
	}
	else
	{	
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

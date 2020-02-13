/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 17:26:29 by chakim            #+#    #+#             */
/*   Updated: 2020/02/13 21:32:27 by chakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_prime(int nb)
{
	int i;

	if (nb < 2)
		return (0);
	else if (nb == 2)
		return (nb);
	else if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i = i + 2;
	}
	return (nb);
}

int		ft_sqrt(int nb)
{
	int i;

	i = 0;
	if (nb < 2)
		return (0);
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

int		ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (0);
	else if (ft_sqrt(nb) == 0)
		return (nb);
	else
	{
		while (ft_is_prime(nb) == 0)
			nb++;
		return (nb);
	}
}

int		main()
{
	printf("%d", ft_find_next_prime(0x7fffffff));
	return (0);
}

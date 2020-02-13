/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 13:54:52 by chakim            #+#    #+#             */
/*   Updated: 2020/02/13 21:16:46 by chakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_power(int nb, int power)
{
	int multi;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		multi = 1;
		while (power != 0)
		{
			multi = multi * nb;
			power--;
		}
		return (multi);
	}
}

int		main()
{
	printf("%d", ft_iterative_power(-40, 2));
			}

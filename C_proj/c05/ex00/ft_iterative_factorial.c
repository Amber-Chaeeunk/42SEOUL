/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 02:16:58 by chakim            #+#    #+#             */
/*   Updated: 2020/02/13 21:01:54 by chakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int fct;
	int i;

	fct = 1;
	i = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		fct = fct * i;
		i++;
	}
	return (fct);
}

int		main()
{
	printf("%d", ft_iterative_factorial(5));
}

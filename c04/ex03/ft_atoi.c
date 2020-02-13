/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 20:30:40 by chakim            #+#    #+#             */
/*   Updated: 2020/02/06 16:12:00 by chakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_white_space(char j)
{		
	if (j == '\v' || j == '\f' || j == '\r' || 
			j == '\t' || j == '\n' || j == ' ')
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int i;
	int nbr;
	int minus;

	i = 0;
	nbr = 0;
	minus = 1;

	while (ft_white_space(str[i]) == 1)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		    minus = minus * (-1);
		i++;
	}
	while (str[i] >= '1' && str[i] <= '9')
	{
		nbr = (nbr * 10) + (str[i] - '0');
		i++;
	}
	return (nbr * minus);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 10:09:35 by chakim            #+#    #+#             */
/*   Updated: 2020/02/08 10:10:57 by chakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_base(char *base)
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
			j++;
		}
		if (base[i] == '+' ||  base[i] == '-' ||  base[i] == '\t' ||  base[i] ==  ' ' ||  base[i] == '\n' ||
			  	base[i] == '\v' ||  base[i] == '\f' ||  base[i] == '\r')
			return (0);
		i++;
	}
	i = 0;
	while (base[i])
		i++;
	return (i);
}

int		print_nbr(char *str, int len, char *base)
{
	int i;
	int nbr;
	int same;
	nbr = 0;
	while (*str)
	{
		same = 0;
		i = 0;
		while (base[i])
		{
			if (*str == base[i])
			{
				same = 1;
				break;
			}
			i++;
		}
		if (same == 1)
			nbr = (nbr * len) + i;
		else
			break;
		str++;
	}
	return (nbr);
}
int		ft_atoi_base(char *str, char *base)
{
	int len;
	int sign;
	sign = 1;
	len = ft_check_base(base);
	if (len > 2)
	{
		while (*str == ' ' || *str == '\n' || *str == '\v' || *str == '\f' || *str == '\r' || *str == '\t')
	 		str++;
		while (*str == '+' || *str == '-')
		{
			if (*str == '-')
				sign = sign * -1;
			str++;
		}
	}
	return (sign * print_nbr(str, len, base));
}

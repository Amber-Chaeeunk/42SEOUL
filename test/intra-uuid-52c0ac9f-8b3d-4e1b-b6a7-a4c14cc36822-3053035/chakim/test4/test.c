/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 15:22:28 by chakim            #+#    #+#             */
/*   Updated: 2020/01/25 15:57:26 by chakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	 test4(void)
{
	int i;
	int j;

	i=0;
	while(i<5)
	{
		printf("*");
		int j=0;
		while(j<i)
		{
			printf("o");
			j++;
		}
			printf("\n");
			i++;

		}


}
	

int main(void)
{
	test4();
	return 0;
}

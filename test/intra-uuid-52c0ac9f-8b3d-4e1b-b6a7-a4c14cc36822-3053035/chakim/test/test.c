/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 14:28:23 by chakim            #+#    #+#             */
/*   Updated: 2020/01/25 15:20:51 by chakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void test (void)
{
	int i;
	int j;

	i=0;

	while(i<5)
	{
		j=0;
		while(j<i)
		{
			printf("o");

			j=j+1;
		}
		printf("*\n");
		i=i+1;
	}

}
	
		


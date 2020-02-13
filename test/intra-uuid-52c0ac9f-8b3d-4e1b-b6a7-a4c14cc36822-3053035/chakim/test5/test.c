/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chakim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 16:01:58 by chakim            #+#    #+#             */
/*   Updated: 2020/01/25 17:58:09 by chakim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void test5(void)
	{
		int i;
		int j;

		i=0;
		while(i<5)
		{	
			j=0;
			while(j<5)
			{
				
				if(i==j)
				{	
					printf("*");
				}
				else if(i>j)
				{
					printf(" ");
				}
				else
				{
					printf("o");
				}
				j=j+1;
			}
			printf("\n");
				  
			i=i+1;
		}
	}

	
		int main(void)
		{
			test5();
			return 0;
		}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 01:28:16 by jurenaul          #+#    #+#             */
/*   Updated: 2022/09/08 02:01:45 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	idx;
	int	r;
	int	s;

	idx = 0;
	r = size - 1;
	while (idx < (size / 2))
	{
		s = tab[idx];
		tab[idx] = tab[r];
		tab[r] = s;
		idx ++;
		r--;
	}
}
/*
#include <stdio.h>
int	main(void) 
{
	int arr[] = {4,3,2,1,0};
	int s = 5;
	int i = 0;

	ft_rev_int_tab(arr, s);
	while ( i <= (s - 1))
	{
		printf("value returned %d", arr[i]);
		i++;
	}
}*/

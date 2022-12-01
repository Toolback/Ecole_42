/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 14:52:47 by jurenaul          #+#    #+#             */
/*   Updated: 2022/09/08 02:02:44 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_check_rec(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	idx;
	int	temp;

	idx = 0;
	while (idx < (size - 1))
	{
		if (tab[idx] > tab[idx + 1])
		{
			temp = tab[idx];
			tab[idx] = tab[idx + 1];
			tab[idx + 1] = temp;
		}
		else
			idx++;
	}
	ft_check_rec(tab, size);
}

void	ft_check_rec(int *tab, int size)
{
	int	idx;
	int	trigger;

	idx = 0;
	trigger = 0;
	while (idx < (size - 1))
	{
		if (tab[idx] > tab[idx + 1])
			trigger += 1;
		idx++;
	}
	if (trigger > 0)
		ft_sort_int_tab(tab, size);
}
/*
#include <stdio.h>
int	main(void)
{
	int	arr[] = {2,3,1,4};
	int	size = 4;

	ft_sort_int_tab (arr, size);
	for (int i = 0; i < 4; i++)
	{
		printf("value retrieved ; %d", arr[i]);
	}
	return (0);
}*/

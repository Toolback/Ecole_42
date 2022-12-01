/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 05:21:34 by jurenaul          #+#    #+#             */
/*   Updated: 2022/09/20 05:41:04 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	while (power > 1)
	{
		res *= nb;
		power --;
	}
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (res);
}
/*
#include <stdio.h>
int	main()
{
	int nbr = 5;
	int power = 3;
	printf("returned result of 5 power 3 is [%d]", ft_iterative_power(nbr, power));
}*/

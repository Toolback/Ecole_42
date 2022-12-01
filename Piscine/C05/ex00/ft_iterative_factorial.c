/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 22:50:26 by jurenaul          #+#    #+#             */
/*   Updated: 2022/09/20 17:36:58 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb == 1 || nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (i >= 1)
	{
		nb *= i;
		i--;
	}
	return (nb);
}
/*
#include <stdio.h>
int main(void)
{
	int nbr = 1;

	printf(" result is => [%d]", ft_iterative_factorial(nbr));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:21:44 by jurenaul          #+#    #+#             */
/*   Updated: 2022/09/20 16:42:23 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	nbr;
	long	a;

	nbr = nb;
	if (nbr <= 0)
		return (0);
	if (nbr == 1)
		return (1);
	a = 2;
	if (nbr > 1)
	{
		while (a * a <= nbr)
		{
			if (a * a == nbr)
				return (a);
			a ++;
		}
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	int nbr = 40000;
	printf("returned nbr [%d]", ft_sqrt(nbr));
}*/

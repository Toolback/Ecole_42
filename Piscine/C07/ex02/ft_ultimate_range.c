/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 04:27:11 by jurenaul          #+#    #+#             */
/*   Updated: 2022/09/21 15:11:34 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*buffer;
	int	*d;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	buffer = malloc(sizeof(int) * (max - min));
	d = buffer;
	if (!d)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	while (i < (max - min))
	{
		buffer[i] = min + i;
		i++;
	}
	return ((max - min));
}

int	main(void)
{
	int nbr1 = -10;
	int nbr2 = 30;
	int **range = 0;

	ft_ultimate_range(range, nbr1, nbr2);
}

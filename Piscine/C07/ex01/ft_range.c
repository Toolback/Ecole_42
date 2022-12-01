/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:18:35 by jurenaul          #+#    #+#             */
/*   Updated: 2022/09/20 00:21:54 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	i;
	int	*buffer;
	int	*d;

	i = 0;
	if (min >= max)
		return (0);
	range = max - min;
	buffer = malloc(sizeof(int) * (range));
	d = buffer;
	if (!d)
		return (0);
	while (i < range)
	{
		buffer[i] = min + i;
		i++;
	}
	return (buffer);
}
/*
int	main(void)
{
	int nb1 = -10;
	int nb2 = 30;

	ft_range(nb1, nb2);
	return (0);
}*/

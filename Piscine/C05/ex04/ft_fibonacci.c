/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 05:49:10 by jurenaul          #+#    #+#             */
/*   Updated: 2022/09/20 11:42:24 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (ft_fibonacci(index - 1) + (ft_fibonacci(index - 2)));
}
/*
#include <stdio.h>
int	main()
{
	int nbr = 3;
	printf("returned res is [%d]", ft_fibonacci(nbr));
}*/

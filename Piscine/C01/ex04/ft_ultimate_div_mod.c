/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 21:42:11 by jurenaul          #+#    #+#             */
/*   Updated: 2022/09/06 23:44:21 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b != 0)
	{
	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
	}
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 6;
	ft_ultimate_div_mod(&a, &b);
	printf("result is : %d\n", a);
	printf("result is : %d\n", b);
}*/

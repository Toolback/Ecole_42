/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 22:38:04 by jurenaul          #+#    #+#             */
/*   Updated: 2022/09/06 23:43:26 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
	*div = a / b;
	*mod = a % b;
	}
}
/*
int	main(void)
{
	int div;
	int mod;

	ft_div_mod(10, 6, &div, &mod);
	printf("returned value : %d \n", div);
	printf("returned value : %d \n", mod);
	return (0);
}*/

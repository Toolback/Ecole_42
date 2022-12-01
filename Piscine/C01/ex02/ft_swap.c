/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 21:01:55 by jurenaul          #+#    #+#             */
/*   Updated: 2022/09/08 03:25:13 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *b;
	*b = *a;
	*a = c;
}
/*
int	main(void)
{
	int a;
	int b;

	a = 2;
	b = 4;
	ft_swap(&a, &b);
	printf("returned %c ; %d\n \n", a, a);	
	printf("returned %c ; %d\n \n", b, b);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 03:21:02 by jurenaul          #+#    #+#             */
/*   Updated: 2022/09/21 15:29:18 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * (-1));
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar(nb + '0');
	}
}
/*
#include <stdio.h>
int	main()
{
	int nbr = 231;
	int nbr2 = 10;
	int nbr3 = -2147483648;

	ft_putnbr(nbr);
	printf("\n --------------\n ");
	ft_putnbr(nbr2);
	printf("\n --------------\n");
	ft_putnbr(nbr3);
	printf("\n --------------\n");
}*/

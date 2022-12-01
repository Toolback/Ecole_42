/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 18:44:59 by jurenaul          #+#    #+#             */
/*   Updated: 2022/09/05 15:46:50 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		ft_putchar('P');
	}
	else
	{
		ft_putchar('N');
	}
}
/*
int	main()
{
	ft_is_negative(0);
	ft_putchar('\n');
	ft_is_negative(-8);
    ft_putchar('\n');
    ft_is_negative(0);
	ft_putchar('\n');
	return(0);
}
*/

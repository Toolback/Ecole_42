/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:19:24 by jurenaul          #+#    #+#             */
/*   Updated: 2022/09/05 20:18:39 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	ascii_num;

	ascii_num = 48;
	while (ascii_num <= 57)
	{
		ft_putchar(ascii_num);
		ascii_num++;
	}
}
/*
int	main()
{
	ft_print_numbers();
	return (0);
}
*/

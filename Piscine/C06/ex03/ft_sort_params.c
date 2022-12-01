/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 20:48:36 by jurenaul          #+#    #+#             */
/*   Updated: 2022/09/14 23:36:24 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_sort_by_ascii(char *str)
{
	int	i;

	i = 0;
}

int	main(int ac, int **av)
{
	int	i;

	i = 1;
	if (ac >= 1)
	{
		while (i <= ac - 1)
		{
			ft_sort_by_ascii(av[i]);
			i++;
		}
	}
	return (0);
}

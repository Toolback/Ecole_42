/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 06:34:32 by jurenaul          #+#    #+#             */
/*   Updated: 2022/09/14 16:26:30 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	idx;
	int	nb;
	int	neg;

	idx = 0;
	nb = 0;
	neg = 1;
	while (str[idx] == ' ' || str[idx] == '\f'
		|| str[idx] == '\n' || str[idx] == '\r'
		|| str[idx] == '\t' || str[idx] == '\v')
		idx++;
	while (str[idx] == '-' || str[idx] == '+')
	{
		if (str[idx] == '-')
			neg *= -1;
	idx++;
	}
	while (str[idx] >= 48 && str[idx] <= 57)
	{
		nb = nb * 10 + (str[idx] - 48);
		idx++;
	}
	return (nb * neg);
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main()
{
	if (argc != 0)
	{
		printf("ft_atoi |%d| \n", ft_atoi(argv[1]));
		printf(" atoi syst |%d| \n", atoi(argv[1]));	

//	printf("ft_atoi 0 |%d| \n", ft_atoi("1234"));
//	printf(" atoi syst 0 |%d| \n", atoi("1234"));	
	printf("ft_atoi 1 |%d| \n", ft_atoi(" ---+--+1234ab567"));
	printf(" atoi syst 1 |%d| \n", atoi(" ---+--+1234ab567"));	
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:04:47 by jurenaul          #+#    #+#             */
/*   Updated: 2022/09/08 14:16:22 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	idx;

	idx = 0;
	if (str[idx] == '\0')
		return (1);
	while (str[idx] != '\0')
	{
		if (!(str[idx] >= 65 && str[idx] <= 90))
		{
			return (0);
		}
		idx++;
	}
	return (1);
}
/*
#include<stdio.h>
int	main()
{
	char test[] = "TEST";
	char test1[] = "test";
	char test2[] = "Test1";
	char test3[] = "";
	char test4[] = "TEST1";
	printf("returned value : %d", ft_str_is_uppercase(test));
	printf("returned value : %d", ft_str_is_uppercase(test1));
	printf("returned value : %d", ft_str_is_uppercase(test2));
	printf("returned value : %d", ft_str_is_uppercase(test3));
	printf("returned value : %d", ft_str_is_uppercase(test4));
}*/

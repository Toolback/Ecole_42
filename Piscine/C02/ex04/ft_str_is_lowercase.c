/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 05:54:17 by jurenaul          #+#    #+#             */
/*   Updated: 2022/09/11 00:47:08 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (!(str[idx] >= 97 && str[idx] <= 122))
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
	char	str[] = "test";
	char	str2[] = "Test";
	char	str3[] = "test test";
	char	str4[] = "tes3t";
	printf("returned value ; %d", ft_str_is_lowercase(str));
	printf("returned value ; %d", ft_str_is_lowercase(str2));
	printf("returned value ; %d", ft_str_is_lowercase(str3));
	printf("returned value ; %d", ft_str_is_lowercase(str4));
	return (0);
}*/

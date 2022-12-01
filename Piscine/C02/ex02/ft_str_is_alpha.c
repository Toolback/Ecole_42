/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 22:50:37 by jurenaul          #+#    #+#             */
/*   Updated: 2022/09/11 00:42:47 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (!((str[idx] >= 65 && str[idx] <= 90)
				|| (str[idx] >= 97 && str[idx] <= 122)))
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
	char str[] = "";
	printf("str 1 =  %d \n", ft_str_is_alpha(str));
	return (0);
}*/

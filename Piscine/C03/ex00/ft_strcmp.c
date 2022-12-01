/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 18:46:08 by jurenaul          #+#    #+#             */
/*   Updated: 2022/09/12 10:27:24 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	idx;

	idx = 0;
	while ((s1[idx] == s2[idx]) && s1[idx] != '\0' && s2[idx] != '\0')
	{
		idx++;
	}
	return (s1[idx] - s2[idx]);
}
/*
#include<stdio.h>
int	main()
{
	char s1[] = "test";
	char s2[] = "tesd";
	printf("%d", ft_strcmp(s1, s2));
}*/

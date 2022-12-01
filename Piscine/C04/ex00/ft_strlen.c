/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 02:53:57 by jurenaul          #+#    #+#             */
/*   Updated: 2022/09/13 19:14:13 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <unistd.h>
#include <stdio.h>
int	main()
{
	char	str[] = "trollMe";
	int	result = ft_strlen(str);
	write(1, &result, sizeof(result));
	printf("result here %d", result);
}*/

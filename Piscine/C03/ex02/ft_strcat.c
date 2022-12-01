/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 01:40:00 by jurenaul          #+#    #+#             */
/*   Updated: 2022/09/12 02:47:09 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	idx;
	int	idx2;

	idx = 0;
	idx2 = 0;
	while (dest[idx] != '\0')
		idx++;
	while (src[idx2] != '\0')
	{
		dest[idx] = src[idx2];
		idx++;
		idx2++;
	}
	dest[idx] = '\0';
	return (dest);
}
/*
#include<stdio.h>
int	main() 
{
	char	dest[] = "Broda ";
	char	src[] = "FromAnoda Moda";
	printf("value returned %s", ft_strcat(dest, src));
}*/

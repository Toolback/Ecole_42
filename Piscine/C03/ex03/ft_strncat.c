/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 02:17:15 by jurenaul          #+#    #+#             */
/*   Updated: 2022/09/13 11:15:28 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	idx;
	unsigned int	idx2;

	idx = 0;
	while (dest[idx] != '\0')
		idx++;
	idx2 = 0;
	while (src[idx2] != '\0' && idx2 < nb)
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
	char 			dest[] = "Oyha";
	char 			src[] = "BrudaFromAnodaModa";
	unsigned int	nb = 6;

	printf("returned value here : %s", ft_strncat(dest, src, nb));
}*/

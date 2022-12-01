/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 19:54:49 by jurenaul          #+#    #+#             */
/*   Updated: 2022/09/12 01:41:49 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	idx;

	idx = 0;
	while (src[idx] && idx < n)
	{
		dest[idx] = src[idx];
		idx ++;
	}
	while (idx < n)
	{
		dest[idx] = '\0';
		idx++;
	}
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char	d[100];
	char	s[] = "sphqz47hsck4iso9w1k4it86";
	unsigned int	n = 10;

	ft_strncpy(d, s, n);
	printf("returned value : %s", d);
	return (0);
}
*/

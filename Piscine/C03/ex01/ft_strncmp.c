/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 21:21:21 by jurenaul          #+#    #+#             */
/*   Updated: 2022/09/13 10:16:23 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	idx;

	idx = 0;
	while (s1[idx] != '\0' && s2[idx] != '\0' && idx < n)
	{
		if (s1[idx] != s2[idx])
			return (s1[idx] - s2[idx]);
		idx ++;
	}
	if (idx != n)
		return (s1[idx] - s2[idx]);
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	char s1[] = "letsee what it does";
	char s2[] = "letsee zhqr it does";
	unsigned int n = 10;

	printf("returned value is : %d", ft_strncmp(s1, s2, n));
	return (0);
}*/

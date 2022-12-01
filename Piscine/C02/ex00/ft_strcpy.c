/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <jurenaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 01:41:08 by jurenaul          #+#    #+#             */
/*   Updated: 2022/09/12 00:13:28 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	idx;

	idx = 0;
	while (src[idx] != '\0')
	{
		dest[idx] = src[idx];
		idx++;
	}
	dest[idx] = '\0';
	return (dest);
}	
/*
 #include <stdio.h>
int	main(void)
{
	char dest[] = "helloWorld";
	char src[10] = "TrymE";

	ft_strcpy(dest, src);
	printf("value retrieved %s \n", dest);
	return (0);
}*/

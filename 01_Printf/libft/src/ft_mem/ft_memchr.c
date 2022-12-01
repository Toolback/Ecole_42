/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <jurenaul@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:29:16 by jurenaul          #+#    #+#             */
/*   Updated: 2022/10/11 22:29:18 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	LIBRARY
*	#include <string.h>
*	DESCRIPTION
*	The memchr() function locates the first occurrence of c (converted to an 
*	unsigned char) in string s.
*	PARAMETERS
*	#1. The pointer in which to check for the occurence of c.
*	#2. The character to check occurence of.
*	#3. The number of bytes to check for any occurence of c in s.
*	RETURN VALUES
*	The memchr() function returns a pointer to the byte located, or NULL if no 
*	such byte exists within n bytes.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}

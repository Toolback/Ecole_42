/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <jurenaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:32:32 by jurenaul          #+#    #+#             */
/*   Updated: 2022/10/30 21:06:09 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	LIBRARY
*	#include <string.h>
*	DESCRIPTION
*	The memmove() function copies len bytes from string src to string dest.  
*	The two strings may overlap; the copy is always done in a nondestructive 
*	manner.
*	PARAMETERS
*	#1. The destiny pointer in which to copy.
*	#2. The source pointer to copy.
*	#3. The number of bytes to copy the source string.
*	RETURN VALUES
*	The memmove() function returns the original value of dest.
*/

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*uc_src;
	char	*uc_dst;
	size_t	i;

	if (!dest && !src)
		return (NULL);
	uc_src = (char *) src;
	uc_dst = (char *) dest;
	i = 0;
	if (uc_dst > uc_src)
		while (n-- > 0)
			uc_dst[n] = uc_src[n];
	else
	{
		while (i < n)
		{
			uc_dst[i] = uc_src[i];
			i++;
		}
	}
	return (dest);
}

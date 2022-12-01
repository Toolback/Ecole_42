/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <jurenaul@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 23:07:57 by jurenaul          #+#    #+#             */
/*   Updated: 2022/10/28 23:16:08 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
*	DESCRIPTION
*	Apply the 'f' function to each character of the string
*	string passed as argument,
*	and passing its index as first argument.
*	Each character is transmitted by address to 'f'
*	in order to be modified if necessary.
*	PARAMETERS
*	#1. The string to iterate.
*	#2. The function to apply.

*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			(*f)(i, s + i);
			i++;
		}
	}
}

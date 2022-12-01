/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 05:25:54 by jurenaul          #+#    #+#             */
/*   Updated: 2022/09/11 00:45:54 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (!((str[idx] >= 48) && (str[idx] <= 57)))
		{
			return (0);
		}
		idx++;
	}
	return (1);
}
/*
 #include<stdio.h>
int	main()
{
	char	str[] = "1";
	printf("returned value : %d ", ft_str_is_numeric(str));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <jurenaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:14:36 by jurenaul          #+#    #+#             */
/*   Updated: 2022/09/08 18:23:46 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	idx;

	idx = 0;
	if (str[idx] == '\0')
		return (1);
	while (str[idx] != '\0')
	{
		if (!(str[idx] >= 32 && str[idx] <= 127))
		{
			return (0);
		}
		idx++;
	}
	return (1);
}
/*
#include<stdio.h>
int main()
{
    char test[] = "TEST hell yeah";
    char test1[] = "";
    char test2[] = "Test1@/_-+=ƒ™";
    char test3[] = "å";
    char test4[] = "TEST1";
    printf("returned value : %d", ft_str_is_printable(test));
    printf("returned value : %d", ft_str_is_printable(test1));
    printf("returned value : %d", ft_str_is_printable(test2));
    printf("returned value : %d", ft_str_is_printable(test3));
    printf("returned value : %d", ft_str_is_printable(test4));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <jurenaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 14:26:42 by jurenaul          #+#    #+#             */
/*   Updated: 2022/09/08 17:04:48 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] >= 97 && str[idx] <= 122)
		{
			str[idx] -= 32;
		}
		idx++;
	}
	return (str);
}
/*
#include<stdio.h>
int	main()
{
      char test[] = "test get me uppercase plw";
      char test1[] = "";
      char test2[] = "Test1@/_-+=ƒ™";
      char test3[] = "å";
      char test4[] = "TEST1";
      printf("returned value : %s", ft_strupcase(test));
      printf("returned value : %s", ft_strupcase(test1));
      printf("returned value : %s", ft_strupcase(test2));
      printf("returned value : %s", ft_strupcase(test3));
      printf("returned value : %s", ft_strupcase(test4));
}*/
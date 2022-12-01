/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <jurenaul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:01:37 by jurenaul          #+#    #+#             */
/*   Updated: 2022/09/08 17:49:36 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		if (str[idx] >= 65 && str[idx] <= 90)
		{
			str[idx] += 32;
		}
		idx++;
	}
	return (str);
}
/*
#include<stdio.h>
int	main()
{
      char test[] = "test get ME uppercase plw";
      char test1[] = "";
      char test2[] = "Test1@/_-+=ƒ™";
      char test3[] = "å";
      char test4[] = "TEST1";
      printf("returned value : %s", ft_strlowcase(test));
      printf("returned value : %s", ft_strlowcase(test1));
      printf("returned value : %s", ft_strlowcase(test2));
      printf("returned value : %s", ft_strlowcase(test3));
      printf("returned value : %s", ft_strlowcase(test4));
}*/
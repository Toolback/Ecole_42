/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 02:33:21 by jurenaul          #+#    #+#             */
/*   Updated: 2022/09/12 23:54:27 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	needle_i;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{	
		needle_i = 0;
		while (str[i + needle_i] != '\0'
			&& to_find[needle_i] == str[needle_i + i])
		{
			if (to_find[needle_i + 1] == '\0')
				return (&str[i]);
		needle_i++;
		}
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
#include <unistd.h>
int main()
{
    char str1[] = "yop";
    char str2[50] = "sdfgsdgkjl yopgjshdkgjsl";

    printf("%s\n", ft_strstr(str2, str1));
    printf("%s\n", strstr(str2, str1));
    return 0;
}*/

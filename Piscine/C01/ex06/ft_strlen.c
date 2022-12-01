/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 00:58:51 by jurenaul          #+#    #+#             */
/*   Updated: 2022/09/06 23:46:56 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_strlen(char *str)
{
	int	idx;

	idx = 0;
	while (str[idx] != '\0')
	{
		idx++;
	}
	return (idx);
}
/*
int	main(void)
{
	char	str[] = "HelBruw";
	int	returned_value;

	returned_value = ft_strlen(str) + 48;
	write(1, &returned_value, sizeof(returned_value));
	return (returned_value);
}*/

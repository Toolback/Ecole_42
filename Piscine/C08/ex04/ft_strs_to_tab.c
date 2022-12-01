/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 00:01:08 by jurenaul          #+#    #+#             */
/*   Updated: 2022/09/22 12:24:32 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_str_dup(char *str)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!dest)
		return (NULL);
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*st_str;
	int					i;

	i = 0;
	st_str = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!st_str)
		return (NULL);
	while (i < ac)
	{
		st_str[i].size = ft_strlen(av[i]);
		st_str[i].str = av[i];
		st_str[i].copy = ft_str_dup(av[i]);
		i++;
	}
	st_str[i].str = 0;
	st_str[i].copy = 0;
	return (st_str);
}

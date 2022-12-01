/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jurenaul <jurenaul@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:56:56 by jurenaul          #+#    #+#             */
/*   Updated: 2022/11/08 12:56:57 by jurenaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdint.h>
# include "libft.h"

int	ft_printf(const char *str, ...);

int	ft_print_str(char *str);
int	ft_print_char(int c);
int	ft_print_ptr(unsigned long long ptr);
int	ft_print_nbr(int num);
int	ft_print_unsigned(unsigned int num);
int	ft_print_hex(unsigned int num, const char format);
int	ft_print_percent(void);

#endif
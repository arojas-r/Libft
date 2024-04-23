/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 11:10:39 by arojas-r          #+#    #+#             */
/*   Updated: 2024/04/19 18:43:24 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	num;

	sign = 1;
	num = 0;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-' || *str == '+')
		sign = 44 - *str++;
	while (ft_isdigit(*str))
		num = num * 10 + (*str++ - '0');
	return (sign * num);
}
/*
#include <stdio.h>
int	main(void)
{
	const char	str[7] = "  -0501";
	printf("%i\n", ft_atoi(str));
	return (0);
}
*/
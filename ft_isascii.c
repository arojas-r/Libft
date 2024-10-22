/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 16:45:57 by arojas-r          #+#    #+#             */
/*   Updated: 2024/03/21 04:18:28 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
Comprueba si un carácter está dentro del rango ASCII
#include <stdio.h>

int	main(void)
{
	int	a;

	a = 128;
	printf("%d\n", ft_isascii(a));
	return(0);
}*/
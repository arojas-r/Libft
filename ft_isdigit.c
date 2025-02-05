/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:09:45 by arojas-r          #+#    #+#             */
/*   Updated: 2024/04/02 11:09:15 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
//Verifica si un carácter es un dígito decimal.
#include <stdio.h>

int	main(void)
{
	int	a;

	a = '0';
	printf("%d\n", ft_isdigit(a));
	return(0);
}*/

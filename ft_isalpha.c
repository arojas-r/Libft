/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:45:12 by arojas-r          #+#    #+#             */
/*   Updated: 2024/04/04 07:17:09 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

/*
//Comprueba si un carácter es una letra alfabética.
#include <stdio.h>
int	main(void)
{
	int	a;

	a = 'e';
	printf("%d\n", ft_isalpha(a));
	return(0);
} */

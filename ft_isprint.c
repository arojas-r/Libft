/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 19:57:28 by arojas-r          #+#    #+#             */
/*   Updated: 2024/03/21 04:19:16 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
//Determina si un carácter es imprimible
o sea si es visible en la pantalla
#include <stdio.h>

int main(void)
{
	int	a;

	a = 46;
	printf("%d\n", ft_isprint(a));
	return(0);
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 18:16:26 by arojas-r          #+#    #+#             */
/*   Updated: 2024/03/21 04:17:08 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
	return ;
}
/*
#include <stdio.h>

int main(void)
{
	char	s[6] = "Kitty";
	printf("Antes: %s\n", s);

	ft_bzero(s, sizeof(s));
	printf("Despues: %s\n", s);
	return(0);
}
*/
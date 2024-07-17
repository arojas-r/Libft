/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 10:23:56 by arojas-r          #+#    #+#             */
/*   Updated: 2024/04/02 10:28:37 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s1[i] == s2[i] && i < n -1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
//Compara los primeros n caracteres de dos cadenas.
int	main ()
{
	const char *s1 = "Kitty";
	const char *s2 = "Kitty!";
	size_t n = 8;

	printf("%ld\n", ft_strncmp(s1, s2, n));
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 10:31:53 by arojas-r          #+#    #+#             */
/*   Updated: 2024/04/02 10:36:22 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (n-- > 0)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}
/*
//Compara dos bloques de memoria byte a byte.
int main(void)
{
    char str1[] = "Razer kraken";
    char str2[] = "Razer kraken kitty";
    char str3[] = "Razer kraken kitty!";

    int res1 = ft_memcmp(str1, str2, sizeof(str1));
    int res2 = ft_memcmp(str1, str3, sizeof(str1));

    printf( "Resultado de comparar str1 y str2: %d\n", res1);
    printf( "Resultado de comparar str1 y str3: %d\n", res2);
}
*/

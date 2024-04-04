/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 05:41:45 by arojas-r          #+#    #+#             */
/*   Updated: 2024/04/04 06:38:49 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*s;
	char		*d;

	s = src;
	d = dest;
	if (d == NULL && s == NULL)
		return (NULL);
	if (d > s && d < s + n)
	{
		s += n - 1;
		d += n - 1;
		while (n--)
			*d-- = *s--;
	}
	else
		while (n--)
			*d++ = *s++;
	return (dest);
}
	/*#include <stdio.h>
int	main(void)
{
	char	src[6] = "Kitty";
	char	dest[6];

	printf("%s\n", ft_memmove (dest, src, sizeof(src)));
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 07:34:32 by arojas-r          #+#    #+#             */
/*   Updated: 2024/04/02 09:53:13 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	d_len;
	size_t	s_len;

	s_len = ft_strlen(src);
	d_len = ft_strlen(dest);
	if (n <= d_len)
		return (n + s_len);
	else
	{
		dest += d_len;
		n -= d_len;
		while (--n && *src)
			*dest++ = *src++;
		*dest = '\0';
		return (d_len + s_len);
	}
}
//Concatena una cadena a otra asegurando 
//que no se exceda el tamaño del búfer.
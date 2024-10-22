/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 20:07:12 by arojas-r          #+#    #+#             */
/*   Updated: 2024/03/25 04:49:39 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;

	p = b;
	if (len == 0)
		return (b);
	while (len--)
		*p++ = (unsigned char)c;
	return (b);
}
//Establece los primeros n bytes 
//de una región de memoria a un valor particular
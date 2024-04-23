/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:26:45 by arojas-r          #+#    #+#             */
/*   Updated: 2024/04/10 19:27:04 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
	return ;
}
/*
#include <stdio.h>
#include <fcntl.h>
int main() 
{
	int fd;
	fd = open("example.txt", O_WRONLY | O_CREAT, 0644);
	
	if (fd == -1)
	{
	
	return (1);

	}
		ft_putchar_fd('1', fd);
	
	close (fd);

	return (0);
    
}
*/

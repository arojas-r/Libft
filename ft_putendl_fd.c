/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arojas-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:28:23 by arojas-r          #+#    #+#             */
/*   Updated: 2024/04/19 18:32:32 by arojas-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
/*
#include <fcntl.h>
#include <stdio.h>
int main ()
{
	char *str = "Michitos ronroneando";
	
	int fd;

	fd = open("borrar.txt", O_WRONLY | O_CREAT, 0644);
	if (fd == -1)
	{
		perror("Error opening file");
		return 1;
	}
	ft_putendl_fd(str, fd);

	if (close(fd) == -1)
	{
		perror("Error closing file");
		return 1;
	}
	return (0);
}
*/

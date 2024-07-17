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
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	ft_putchar_fd('\n', fd);
}
/* 
1
int	main(void)
{
	char	*s;
	int		fd;

	s = "Kitty";
	fd = 1;
	ft_putendl_fd(s, fd);
	return (0);
}

2
#include <fcntl.h>
#include <stdio.h>
int	main(void)
{
	char	*str = "Michitos ronroneando";
	int		fd;

	fd = open("borrar.txt", O_WRONLY | O_CREAT, 0644);
	ft_putendl_fd(str, fd);
	close(fd);
	return (0);
}

3
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
}*/
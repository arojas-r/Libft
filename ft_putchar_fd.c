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
//descripcion del archivo 
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int	main(void)
{
	int		fd;
	char	caracter;

	// Abre o crea un archivo llamado "ejemplo.txt"
	// en modo de escritura (O_WRONLY)
	// y con la bandera O_CREAT que crea el archivo si no existe.
	fd = open("ana.txt", O_WRONLY | O_CREAT, 0644);
	if (fd == -1)
	{
		perror("Error al abrir el archivo");
		return (EXIT_FAILURE);
	}

	// Carácter que queremos escribir en el archivo
	caracter = 'c';

	// Llama a la función para escribir el carácter en el archivo
	ft_putchar_fd(caracter, fd);

	// Cierra el archivo
	if (close(fd) == -1)
	{
		perror("Error al cerrar el archivo");
		return (EXIT_FAILURE);
	}
	// Mostrar el contenido del archivo
	system("cat ana.txt");
	return (0);
}

 int main(void)
{
	char c;
	int fd;

	c = 'a';
	fd = 2;
	ft_putchar_fd(c, fd);
	return(0);
}*/
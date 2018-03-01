/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 13:10:11 by jmarques          #+#    #+#             */
/*   Updated: 2018/03/01 14:20:38 by jmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/header.h"
#include <stdio.h>
#define BUF_SIZE 4096

int main(int argc, char **argv)
{
	int		fd;
	int		i;
	char	buf[1];

	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
		{
			write(1, "open() error.", 14);
			return (1);
		}
		i = 0;
		while (read(fd, buf + i, 1))
		{
			printf("%s", buf);
			i++;
		}

		if (close(fd) == -1)
		{
			write(1, "close() error.", 14);
			return (1);
		}
	}

	else if (argc == 1)
		write(1, "File name mssing.", 19);
	else if (argc > 2)
		write(1, "Too many arguments.", 20);
	return (0);
}


#include <stdio.h>
#include <sys/fcntl.h>
#include <wait.h>
#include "get_next_line.h"

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int main(int ac, char **av)
{
	int fd;
	int get;
	char *line[1];

	fd = open(av[1], O_RDONLY);
	if (fd > -1)
	{
		while ((get = get_next_line(fd, line)) > 0)
			ft_putstr(*line);

	}
	return 0;
}
/*
int main(int argc, char **argv) {
	int		fd;
	int		fd2;
	char	*line;
	pid_t	child;
	char	n = '\n';
	fd  = open(argv[1], O_RDONLY);
	fd2 = open("me.txt", O_WRONLY | O_CREAT | O_TRUNC, 0666);
	if (fd == -1 || fd2 == -1) {
		perror("open");
		close(fd);
		close(fd2);
		return (-1);
	}
	while (get_next_line(fd, &line) == 1) {
		write(fd2, line, ft_strlen(line));
		write(fd2, &n,
		      1);                    // attention si le fichier test n a pas de \n et que ca affiche une erreur c'est normal
		free(line);                            // vous inquietez pas
	}
	close(fd);
	close(fd2);
	child = fork();
	if (child == 0) {
		char *arg[] = {"/usr/bin/diff", NULL, "me.txt", NULL};

		arg[1] = argv[1];
		execve(arg[0], arg, NULL);
		exit(0);
	}
	else
		wait(NULL); // bad code I know ... but it's not the project
	(void) argc;
	(void) argv;
	return (0);
}*/
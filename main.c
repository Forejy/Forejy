#include <sys/fcntl.h>
#include "get_next_line.h"
#include <errno.h>
#include <string.h>
#include <stdio.h>

int main(int ac, char **av)
 {

	 //FONCTIONS AUTORISES : READ, MALLOC. FREE
//get_next_line sert a lire une ligne a la fois

	int fd = 0;
	int gnl = 0;

	fd = 0;


	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		printf("Oh dear, something went wrong with read()! %s\n", strerror(errno));
		return (1);
	}

	char **line;

	if (!(line = (char **)malloc(sizeof(char *))))
		return (1);

	gnl = get_next_line(fd, line);
	while (gnl >= -1)
	{
		if (gnl > 0)
		{
			ft_putstr(*line);
		}
		else if (gnl == 0)
		{
			return (0);
		}
		else return (1);
		gnl = get_next_line(fd, line);
	}


	return (0);
}
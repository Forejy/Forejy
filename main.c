#include "get_next_line_git.h"
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char const *s, int fd)
{
	while (s && *s)
		ft_putchar_fd(*s++, fd);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char const *s)
{
	while (s && *s)
		ft_putchar(*s++);
}
void	ft_putendl_fd(char const *s, int fd)
{
	ft_putstr_fd(ft_strjoin(s, "\n"), fd);
}

void	ft_putendl(char const *s)
{
	ft_putendl_fd(s, 1);
}

#include <stdio.h>

int		main(int argc, char **argv)
{
	int		fd;
	size_t  fd_;
	char	*line;

	if (argc == 1)
		fd = 0;
	else if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		fd_ = fd;
		printf("%d\n", fd_);
	}
	else
		return (2);
	while (get_next_line(fd, &line) == 1)
	{
		ft_putstr(line);
		free(line);
	}
	if (argc == 2)
		close(fd);
}
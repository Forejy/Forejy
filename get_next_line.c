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

int ft_strlen(char *str)
{
	int i;

	i = 0;
	if (str != NULL)
	{
		while (str[i])
			i++;
	}
	return (i);
}

char *ft_strjoin_nextline(char *s1, char *save, char *s2) // strjoin pas bon, il faut concatener pas remplacer
{
	int len_total;
	char *str;
	char *temp;

	len_total = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = (char *)malloc(sizeof(char) * (len_total + 1))))
		return ((void *)0);
	temp = str;

	if (save)
	{
		while(*save && *save != '\n')
		{
			*str++ = *save++;
		}
		if (*save)
		{
			while (*save)

		}
	}
	if (s1)
	{
		while (*s1 && *s1 != '\n')
			*str++ = *s1++;
		if (*s1 == '\n')
			s1++;
		while (*s1 && *s1 != '\n')
			*save++ = *s1++;
	}
	if (s2)
	{
		while (*s2 && *s2 != '\n')
			*str++ = *s2++;
	}
	*str = '\0';
	return (temp);
}


char    *ft_strcpy(char *dest, char *src)
{
	while (*src)
		*dest++ = *src++;
	return (dest);
}

int better_get_next_line(const int fd, char **line)
{
	char *buffer;
	char *save;
	int i;
	int j;

	if(!(buffer = (char *)malloc(sizeof(char) * 2)))
		return (-1);
	if(!(save = (char *)malloc(sizeof(char) * 2)))
		return (-1);
	i = 1;
	while (i >= 0)
	{
		buffer[i] = '\0';
		save[i] = '\0';
		i--;
	}

	i = 0;
	j = 3;
	while (read(fd, buffer + i, 1) > 0)
	{
		if (buffer[i] == '\n')
		{
			buffer[i] = '\0';
			*line = buffer;
			return (1);
		}
		ft_strcpy(save, buffer);
		if(!(buffer = (char *)malloc(sizeof(char) * j)))
			return (-1);
		ft_strcpy(buffer, save);
		if(!(save = (char *)malloc(sizeof(char) * j)))
			return (-1);
		i++;
		j++;
	}

	*line = buffer;
	return (1);
}

int nonopti_get_next_line(const int fd, char **line)
{
	char *buffer;
	static int i;

	if (BUFF_SIZE < 1 || !line)
		return (-1);
	if(!(buffer = (char *)malloc(sizeof(char) * BUFF_SIZE)))
		return (-1);
i = 0;
	while (i < BUFF_SIZE)
	{
		buffer[i] = '\0';
		i++;
	}

	i = 0;
	while ( i < BUFF_SIZE && read(fd, buffer + i, 1) > 0)
	{
		if (buffer[i] == '\n')
		{
			buffer[i] = '\0';
			*line = buffer;
			return (1);
		}
		i++;
	}
	*line = buffer;

	return (0);
}

int no_protected_get_next_line(const int fd, char **line)
{
	static char *buffer;

	if((!(buffer = (char *)malloc(sizeof(char) * (BUFF_SIZE + 1)))
	   || BUFF_SIZE < 1 || !line || fd == -1))
		return (-1);
	*line = &buffer[0];
	while (read(fd, buffer, 1) > 0)
	{
		if (*buffer == '\n')
		{
			*buffer = '\0';
			return (1);
		}
		buffer++;
	}
	return (0);
}

int get_next_line(const int fd, char **line)
{
	static char *buffer;
	char *str;
	char *save;
	int i;

	if((!(buffer = (char *)malloc(sizeof(char) * (BUFF_SIZE + 1)))
	    || BUFF_SIZE < 1 || !line || fd == -1))
		return (-1);

	i = 0;
	while (i <= BUFF_SIZE)
		buffer[i++] = '\0';

	str = (void *)0;
	while(*buffer != '\n' && (read(fd, buffer, BUFF_SIZE) >= 1))
	{
			str = ft_strjoin_nextline(str, save, buffer);
			*line = str;
			return (1);
	}
	free (buffer);
	return (0);
}
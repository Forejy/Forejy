#include "libft.h"

int count_word (char const *str, char c)
{
	int i;
	int count;

	i     = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c)
			count++;
		while (str[i] != c)
			i++;
		i++;
	}
	return (count);
}

int strlen_strsplit(char const *str, char c)
{
	int i;

	i = 0;
	while (str[i] != c)
		i++;
	return (i);
}

char **ft_strsplit(char const *str, char c)
{
	char **be_split;
	char *now_str;
	char **begin;


	if(!str || !(be_split = (char **)malloc(sizeof(char *) * (count_word(str, c) + 1))))
		return ((void *)0);
	begin = be_split;

	while (*str)
	{
		if (*str == c)
			str++;
		else if (*str != c)
		{
			if(!(now_str = (char *)malloc(sizeof(char) * (strlen_strsplit(str, c) + 1))))
				return ((void *)0);
			*be_split = now_str;
			be_split++;
			while (*str != c) {
				*now_str++ = *str++;
			}
			*now_str = '\0';
		}
	}
	*be_split = (void *)0;
	return (begin);
}
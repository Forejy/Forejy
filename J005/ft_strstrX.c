#include <stdio.h>
#include <string.h>

int		ft_strlen(char *chaine)
{
	int		i;

	i = 0;
	while (chaine[i])
		i++;
	return (i);
}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n--)
	{
		if (!*s1 || *s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

char *ft_strstr(char *str, char*to_find)
{
	int len_to_find;

	len_to_find = ft_strlen(to_find);
	while (*str)
	{
		if (*str == *to_find)
		{
			if (ft_strncmp(str, to_find, len_to_find) == 0)
				return (char *)str;
		}

		str++;
	}
	return (NULL);
}

int main(void)
{
	printf("%s\n", ft_strstr("texte de ok test", "texte de ok test"));
	printf("%s", strstr("texte de ok test", "te"));
	return (0);
}

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int index;

	index = 0;
	if (n == 0)
	return (0);

	while (s1[index] == s2[index] && s1[index] != '\0' && index < n)
	{
		index++;
	}
	return(s1[index] - s2[index]);
}

int main(void)
{
	printf("%d\n", strncmp("", "", 1));
	printf("%d\n", ft_strncmp("", "", 1));
	printf("%d\n", strncmp("abcd", "abc", 4));
	printf("%d\n", ft_strncmp("abcd", "abc", 4));
	printf("%d\n", strncmp("abcd", "bcde", -100));
	printf("%d\n", ft_strncmp("abcd", "bcde", -100));
}


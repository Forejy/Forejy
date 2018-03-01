#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while (s1[index] == s2[index] && s1[index] != '\0')
	{
		index++;
	}
	return(s1[index] - s2[index]);
}

int main(void)
{
	printf("%d\n", strcmp("", ""));
	printf("%d\n", ft_strcmp("", ""));
	printf("%d\n", strcmp("abcd", "abc"));
	printf("%d\n", ft_strcmp("abcd", "abc"));
	printf("%d\n", strcmp("abcd", "abcde"));
	printf("%d\n", ft_strcmp("abcd", "abcde"));


}


#include <stdio.h>
#include <string.h>

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)
{
///	char src[] = "Salut";
	char dest[3];

	strcpy(dest, "Sal");
	printf("src: %s\ndest: %s\n", dest, "Sal");
	ft_strcpy(dest, "Sal");
	printf("src: %s\ndest: %s\n", dest, "Sal");
	
}


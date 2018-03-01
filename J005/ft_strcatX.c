#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

int main()
{
	char dest[1000] = "Quand la chatte est mouille, ";
	strcat(dest, "les seins sont durs.");
	printf("%s", dest);
	
	
	char dest2[1000] = "Quand la chatte est mouille, ";
	ft_strcat(dest2, "les seins sont durs.");
	printf("%s", dest2);
}


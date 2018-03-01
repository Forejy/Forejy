#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, int nb)
{
	while (*dest != '\0')
		dest++;
	while (nb > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	*dest = '\0';
	return (dest);
}

int main()
{
	char dest[1000] = "Quand la chatte est mouille, ";
	strncat(dest, "les seins sont durs.", 100);
	printf("%s", dest);
	
	
	char dest2[1000] = "Quand la chatte est mouille, ";
	ft_strncat(dest2, "les seins sont durs.", 100);
	printf("%s", dest2);
}


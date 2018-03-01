#include <stdio.h>
#include <string.h>

unsigned int	nombre_caractere(char *chaine)
{
	unsigned int i;

	i = 0;
	while(chaine[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int nb_carac_dest;
	unsigned int nb_carac_src;
	
	nb_carac_dest = nombre_caractere(dest);
	nb_carac_src = nombre_caractere(src);
	if (size < nb_carac_dest)
		return (size + nb_carac_src);
	while (*dest) //dest > size sinon bus error
		dest++;
	i = 0;
	while (src[i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
	dest[i] = '\0';
	return (nb_carac_dest + nb_carac_src);
}

int main()
{
	char dst[5] = "231";
	char dst2[5] = "231";
	char src[9] = "1";

	printf("%d\n",ft_strlcat(dst, src, -1));
    :p

	printf("%lu\n", strlcat(dst2, src, -1));
	printf("%s\n%s\n", dst, dst2);
}


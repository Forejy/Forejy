char *ft_strncat(char *dest, char *src, int nb)
{
	char *temp;

	temp = dest;
	while (*dest)
		dest++;
	while ( nb-- > 0 && (*dest++ = *src++))
		if (!nb)
			*dest = '\0';
	return (temp);
}
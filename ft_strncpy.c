char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	while (*src && n > 0)
	{
		*dest++ = *src++;
		n--;
	}
	while (n--)
		*dest++ = '\0';
	return (dest);
}
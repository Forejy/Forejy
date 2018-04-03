void ftt_strcpy( char *dest, char *src)
{
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
}
char *ft_strcat( char *dest, char *src)
{
	char *temp;

	temp = dest;
	while (*dest)
		dest++;
	ftt_strcpy(dest, src);
	return (temp);
}
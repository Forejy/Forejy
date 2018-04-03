int ft_strncmp( char const *s1, char const *s2, unsigned int n)
{
	while (n && s1 == s2)
	{
		s1++;
		s2++;
		n--;
	}
	return ((unsigned char *)s1 - (unsigned char *)s2);
}

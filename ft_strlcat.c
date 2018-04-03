int ft_strlen2(const char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int ft_strlcat( char *dest, char *src, unsigned int size) {
	{
		char         *d = dest;
		const char   *s = src;
		unsigned int n  = size;
		unsigned int dlen;

		while (n-- != 0 && *d != '\0')
			d++;
		dlen = d - dest;
		n    = size - dlen;

		if (n == 0)
			return (dlen + ft_strlen2(s));
		while (*s != '\0') {
			if (n != 1) {
				*d++ = *s;
				n--;
			}
			s++;
		}
		*d   = '\0';

		return (dlen + (s - src));
	}
}
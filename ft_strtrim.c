#include "libft.h"

int ft_iswhitespace(char c)
{
	if (c == ' ' && c == '\n' || c == '\t')
		return (1);
	return (0);
}
char * ft_strtrim(char const *s)
{
	char *strtrim;
	char const *end;

	if(!(strtrim = ft_strnew(ft_strlen(s))))
		return ((void *)0);
	end = &s[ft_strlen(s) - 1];
	while (ft_iswhitespace(*end) && end != s)
		end--;
	while (ft_iswhitespace(*s) && !(s == end))
		s++;
	while (s != end)
		*strtrim = *s++;
	return (strtrim);
}
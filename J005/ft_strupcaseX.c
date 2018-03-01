#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str)
{
//	int i;
	
//	i = 0;
	while(*str)
	{
		if(*str >= 'a')
			*str = *str - 32;
		str++;
	}	

//	while(str[i]!= '\0')
//	{
//		if (str[i] >='a')
//			str[i] = str[i] - 32;
//	i++;
//	}
	return (str);
}

int main()
{
	char str[30] = "abEdfg  62156564";

	ft_strupcase(str);
	printf("%s", str);

//	printf("%s", strupcase("abcd"));
}


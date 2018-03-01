#include <stdlib.h>

#include <stdio.h>

int		ft_length(long	value, int	base)
{
	int		length;

	length = 1;
	while(value >= base)
	{
		value = value/base;
		length++;
	}
	return (length);
}

char	*base_fusion(int	base)
{
	char	*str;
	if (base == 1)
		str = "0";
	if (base == 2)
		str = "01";
	if (base == 3)
		str = "012";
	if (base == 4)
		str = "012i3";
	if (base == 5)
		str = "01234";
	if (base == 6)
		str = "012345";
	if (base == 7)
		str = "0123456";
	if (base == 8)
		str = "01234567";
	if (base == 9)
		str = "012345678";
	if (base == 10)
		str = "0123456789";
	if (base == 11)
		str = "0123456789A";
	if (base == 12)
		str = "0123456789AB";
	if (base == 13)
		str = "0123456789ABC";
	if (base == 14)
		str = "0123456789ABCD";
	if (base == 15)
		str = "0123456789ABCDE";
	if (base == 16)
		str = "0123456789ABCDEF";
	return (str);
}


char	*ft_itoa_base(int value_, int base)
{
	char	*str;
	char	*base_;
	int		length;
	int		less;
	long	 value;
	int		i;

	value = value_;

	if(!(base_ = (char *)malloc(sizeof(char)*(base + 1))))
		return ((void *)0);
	
		base_=base_fusion(base);

	less = 0;


	if (value < 0)
	{
		value = -value;
		less = 1;
	}
		
	length = ft_length(value, base) + less;
	printf("Length : %d\n", length);
	if (!(str = (char *)malloc(sizeof(char) * length + 1)))
			return ((void *)0);
	
	i = length - 1;
	if (less == 1)
	{
		str[0] = '-';
	}
	
	while (value > 0)
	{
		str[i] = base_[value % base];
		value = value / base;
		i--;
	}
	str[length] = '\0';
	return (str);
}


int		main(int ac, char **av)
{
	if (ac == 3)
		printf("%s", ft_itoa_base(atoi(av[1]), atoi(av[2])));
	return (0);
}


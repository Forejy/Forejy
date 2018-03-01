int		ft_power(int nb, int power)
{
	if (power == 0)
		return (1);
	return (nb * ft_power(nb, power - 1));
}

unsigned char *print_bits(unsigned char octet)
{
	int i = 7;
	int	p = 0;
	int tabo[7];
	while (i >= 0)
	{
		p = ft_power(octet, i);	
		tabo[i] = octet/p;
		octet = octet % p;
	}
	return (*tabo);
}

int main(int argc, char **argv)
{
	if (argc)
		print_bits((unsigned char)argv[1]);
	return (0);
}


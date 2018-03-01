#include <stdio.h>
#include <time.h>

int be_the_prime(int nb)
{
	int i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	if (nb == 2)
		return (1);
	while (i <= nb)
	{
		if (nb % i  == 0)
			return 0;
		i++;
	}
	return (1);
}

int ft_find_next_prime(int nb)
{
	while (nb >= 0 && nb <= 2147483647)
	{
		if (be_the_prime(nb) == 1)
			return nb;
		nb++;
	}
	return 0;
}



int main(void)
{
	int time;

	time = 0;
	printf("%d\n", ft_find_next_prime(3));
	time = clock();
	printf("%dms\n", time);
}


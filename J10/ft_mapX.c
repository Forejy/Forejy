#include <stdlib.h>

int		add1(int nb)
{
	nb = nb + nb;
	return nb;
}

int(*f)(int)=add1;

int *ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	int *tab_;

	i = 0;
	tab_ = (int *)malloc(sizeof(int)*length);

	while (i < length)
	{
		tab_[i]=f(tab[i]);
		i++;
	}
	return tab_;
}


int main (void)
{
	int tab[] = {1, 2, 3};
	int *tab_;
	int i = 0;

	tab_ = ft_map(tab, 3, f);

	while (i < 3)
		printf("%d\n", tab_[i++]);
	
	return 0;
}


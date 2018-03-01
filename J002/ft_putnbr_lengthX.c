#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int     ft_putnbr_length(int nb)
{
    int i;

	i = 1;

	while (nb > 10)
    {
         nb = nb / 10;
         i++;
   }

return i;
}

int main(void)
{
	int i;
	i = ft_putnbr_length(150000000);
	ft_putchar(i + 48);
return 0;
}

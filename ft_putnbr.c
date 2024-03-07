#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	char	digit;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb <= -10)
			ft_putnbr(-(nb / 10));
		digit = '0' - nb % 10;
	}
	else
	{
		if (nb >= 10)
			ft_putnbr(nb / 10);
		digit = '0' + nb % 10;
	}
	write(1, &digit, 1);
}
int main()
{
	int nb = -785;

	ft_putnbr(nb);
	write(1, "\n", 1);
	return 0;
}

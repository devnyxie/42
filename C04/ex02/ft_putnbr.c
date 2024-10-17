#include <unistd.h>

void ft_putnbr(int nb) {
	if (nb == -2147483648) {
        write(1, "-2147483648", 11);
        return;
    }

    if (nb < 0) {
        write(1, "-", 1);
        nb = -nb;
    }

    if (nb >= 10) {
        ft_putnbr(nb / 10);
    }
    char digit = (nb % 10) + '0'; // Convert digit to character
    write(1, &digit, 1);
}
/*
int main()
{
	ft_putnbr(2147483647);
	return 0;
}
*/

#include <unistd.h>

// void output(char *str, int index)
// {
// 	while(index >= 0)
// 		write(1, &str[index--], 1);
// }
// void ensure_positive(int *nb_temp)
// {
// 	if(*nb_temp < 0)
// 		*nb_temp = -(*nb_temp); 
// }

// void	ft_putnbr(int nb)
// {
// 	int	nb_temp;
// 	char	result[13];	// 12 digits + 1 for the negative sign
// 	int	i;

// 	nb_temp = nb;
// 	i = 0;

// 	if (nb_temp == 0) {
//         write(1, "0", 1);
//         return;
//     }

//     // Handle INT_MIN case
//     if (nb_temp == -2147483648) {
//         write(1, "-2147483648", 11);
//         return;
//     }

// 	// output '-' straight away if the number is negative
// 	if (nb_temp < 0)
// 	{
// 		output("-", 0);
// 		ensure_positive(&nb_temp);
// 	}

// 	while (nb_temp > 0)
// 	{
// 		result[i] = (nb_temp % 10) + '0';
// 		nb_temp /= 10;
// 		i++;
// 	}
	
// 	output(result, i);
// }

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



// int main()
// {
// 	ft_putnbr(2147483647);
// 	// 2147483647
// 	// -2147483648
// 	// 1234567890
// 	// 42
// 	return 0;
// }

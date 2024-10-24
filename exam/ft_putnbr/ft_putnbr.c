#include <unistd.h>

void ft_putnbr(int n){
    if (n == -2147483648) {
		write(1, "-2147483648", 11);
		return;
	}
    if(n < 0){
        write(1, "-", 1);
        n = -n;
    }
    if(n > 9){
        ft_putnbr(n / 10);
    }
    char output = n % 10 + '0';
    write(1, &output, 1);
}

int main(void){
    ft_putnbr(-2147483647);
    return(0);
}
#include <unistd.h>

// @return: 0 if failed, 1 if success
int val_base(char *str, int size)
{
    int i;
    int j;


    i = 0;
    if(size <= 1)
        return 0;
    while(str[i] != '\0')
    {
        j = i + 1;
        while(str[j] != '\0')
        {
            if(str[j] == str[i])
                return 0;
            if(str[j] == '+' || str[j] == '-')
                return 0;
            j++;
        }
        i++;
    }
    return 1;
}

int count_base(char *base)
{
    int i;

    i = 0;
    while(*base)
    {   
        i++;
        base++;
    }

    return (i);
}

void ft_putnbr_base(int nbr, char *base)
{
    int base_c = count_base(base);
    if(!val_base(base, base_c)) return;

    if (nbr == -2147483648) {
        write(1, "-", 1);
        ft_putnbr_base(-(nbr / base_c), base);  // Divide by base, convert to positive and call recursively
        char digit = base[-(nbr % base_c)]; // Handle the remainder as positive
        write(1, &digit, 1);
        return;
    }

    if (nbr < 0) {
        write(1, "-", 1);
        nbr = -nbr;
    }

    // Handle zero explicitly
    if (nbr == 0) {
        write(1, &base[0], 1);
        return;
    }

    if (nbr >= base_c) {
        ft_putnbr_base(nbr / base_c, base);
    }
    char digit = base[nbr % base_c]; // Convert digit to character. "% base_c" is used to limit the digit to the base.
    write(1, &digit, 1);
}

int main()
{
    long long int a = -2147483648;
    ft_putnbr_base(a, "01");
    write(1, "\n", 1);
    // ft_putnbr_base(42, "0123456789");
    // write(1, "\n", 1);
    // ft_putnbr_base(42, "poneyvif");
    // write(1, "\n", 1);
    // ft_putnbr_base(42, "0123456789ABCDEF");
    // write(1, "\n", 1);
    return 0;
}

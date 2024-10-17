/*
1. skip all leading whitespace and unprintable (9-13)
2. assign leading - or + to the sign which is positive by default;
3. convert each str[i] into the INT
4. return sign * result

	aka this must pass: ---+--+1234ab567 -> -1234
*/

#include <stdio.h>

int ft_atoi(char *str)
{
	int result;
	int sign;
	int neg_count;

	result = 0;
	sign = 1; // positive by default
	neg_count = 0; // to count '-' signs

	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	

	// Count sign (only - is valid)
    while (*str == '-' || *str == '+') {
        if (*str == '-') {
            neg_count++;
        }
        str++;
    }

    // Determine the sign (result will be negative if there are odd number of '-' signs)
    if (neg_count % 2 != 0) {
        sign = -1;
    }

    // Convert digits
    while (*str >= '0' && *str <= '9') {
        result = result * 10 + (*str - '0');
        str++;
    }

    return result * sign;
}


// int main(void){
// 	char *str = "-123";
// 	int result = ft_atoi(str);
// 	printf("%i", result);
// 	return(0);
// }

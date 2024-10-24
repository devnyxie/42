#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

char *ft_itoa(int n) {
    // Handle special case for zero
    if (n == 0) {
        char *res = (char *)malloc(2 * sizeof(char)); // space for '0' and '\0'
        res[0] = '0';
        res[1] = '\0';
        return res;
    }

    // Allocate memory for digits and sign
    int temp_n = n;
    int digit_count = 0;
    int is_negative = n < 0;

    while (temp_n != 0) {
        temp_n /= 10;
        digit_count++;
    }

    char *res = (char *)malloc((digit_count + is_negative + 1) * sizeof(char));
    char *res_start = res;

    // Fill the result in reverse order
    if (is_negative) {
        n = -n;
        *res++ = '-'; // Place the negative sign
    }

    int index = digit_count + is_negative - 1; // Start index for filling digits
    while (n != 0) {
        res[index--] = (n % 10) + '0'; // Fill from the end towards the start
        n /= 10;
    }

    // Null-terminate the string
    res[digit_count + is_negative] = '\0';

    return res_start;
}



int main() {
    int test_cases[] = {42};
    int num_test_cases = sizeof(test_cases) / sizeof(test_cases[0]);

    for (int i = 0; i < num_test_cases; i++) {
        char *result = ft_itoa(test_cases[i]);
        printf("ft_itoa(%d) => %s\n", test_cases[i], result);
        free(result); // Don't forget to free the allocated memory
    }

    return 0;
}

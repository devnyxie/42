#include <stdio.h>

// === 6 ===
// The loop starts because 2 * 2 is 4 (less than 6).
// 6 % 2 is 0, so it returns 0 (not prime).

// === 7 ===
// The loop starts because 2 * 2 is 4 (less than 7).
// 7 % 2 is 1 (not divisible), then i increments to 3.
// 3 * 3 is 9 (greater than 7), so it exits and returns 1 (prime).

// Example:
// Let's say we want to check if num = 29 is prime:
// Start with i = 2:
//     Check if 29 % 2 == 0 (not divisible).
// Increment i to 3:
//     Check if 29 % 3 == 0 (not divisible).
// Increment i to 4:
//     Check if 4 * 4 > 29 (4 is not greater than the square root of 29, which is approximately 5.39).
// Increment i to 5:
//     Check if 29 % 5 == 0 (not divisible).
// Increment i to 6:
//     Check if 6 * 6 > 29 (6 is greater than the square root of 29, therefore it is prime);

// in order to find the num, we must check all numbers up to square root of num.

// lets implement is_prime function
int is_prime(int num){
    if(num <= 1)
        return 0;
    int i = 2;
    while(i*i <= num){
        if (num % i == 0) return 0;
        i++;
    }
    return 1;
}

// If you call add_prime_sum(10), the function will:
// Identify all prime numbers less than 10 (which are 2, 3, 5, and 7).
// Sum those primes, resulting in 17.

int add_prime_sum(int limit){
    int sum = 0;
    int i = 2;
    while (i < limit) {
        if (is_prime(i)) {
            printf("%i is prime\n", i);
            sum += i;
        }
        i++;
    }
    return sum;
}

int main(void) {
    int limit = 30;  // Change this value to test with different limits
    int result = add_prime_sum(limit);
    printf("The sum of prime numbers less than %d is: %d\n", limit, result);
    return 0;
}

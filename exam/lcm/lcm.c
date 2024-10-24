#include <stdio.h>

int lcm(int a, int b) {
    if (a == 0 || b == 0) {
        return 0; 
    }
    
    int sum = a; // Start with a
    
    // Increment sum until it is a multiple of both a and b
    while (sum % b != 0) {
        sum = sum + a; 
    }
    
    return sum;
}

int main() {
    int a = 15, b = 20;
    printf("LCM of %d and %d is %d\n", a, b, lcm(a, b)); // Output: 60
    return 0;
}
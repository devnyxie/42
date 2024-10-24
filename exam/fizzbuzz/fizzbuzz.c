#include <unistd.h>

// lookup table & recursion
void output_int(int number) {
	if (number > 9)
		output_int(number / 10);
	write(1, &"0123456789"[number % 10], 1);
}

void output(int num) {
    if (num % 3 == 0 && num % 5 == 0) {
        write(1, "fizzbuzz", 8);
    } else if (num % 3 == 0) {
        write(1, "fizz", 4);
    } else if (num % 5 == 0) {
        write(1, "buzz", 4);
    } else {
        output_int(num);
    }
}

int main(void) {
    int i = 1;
    while (i <= 100){
        output(i);
        write(1, "\n", 1);
        i++;
    }
}
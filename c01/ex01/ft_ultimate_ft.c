#include <unistd.h>
#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main(void) {
    int value = 10;                // Initial value
	printf("Before: %d\n", value);
    int *level1 = &value;          // Pointer to int
    int **level2 = &level1;        // Pointer to pointer to int
    int ***level3 = &level2;       // Pointer to pointer to pointer to int
    int ****level4 = &level3;      // Pointer to pointer to pointer to pointer to int
    int *****level5 = &level4;     // Pointer to pointer to pointer to pointer to pointer to int
    int ******level6 = &level5;    // Pointer to pointer to pointer to pointer to pointer to pointer to int
    int *******level7 = &level6;   // Pointer to pointer to pointer to pointer to pointer to pointer to pointer to int
    int ********level8 = &level7;  // Pointer to pointer to pointer to pointer to pointer to pointer to pointer to pointer to int
    int *********level9 = &level8;  // Pointer to pointer to pointer to pointer to pointer to pointer to pointer to pointer to pointer to int

    ft_ultimate_ft(level9);  // Call the function

    // Now, value should be 42
    printf("After: %d\n", value);
	return(0);
}

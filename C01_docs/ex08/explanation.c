#include <stdio.h>

void swap_vars(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print_array(int *tab, int size) {
	for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
	printf("\n");
}

void ft_sort_int_tab(int *tab, int size) {
    int i; // index 1
    int j; // index 2
    int swapped; // 1 = true, 0 = false;

    swapped = 0;
    i = 0;
    printf("Initial array: ");
    print_array(tab, size); // Log initial array

    while (i < (size - 1)) {
        j = 0;
        swapped = 0;
        printf("=== Pass %d ===", i + 1);
		printf("\nCurrent array: ");
		print_array(tab, size);
        while (j < (size - i - 1)) {
            printf("Comparing %d and %d: ", tab[j], tab[j + 1]); // Log comparison
            if (tab[j] > tab[j + 1]) {
                swap_vars(&tab[j], &tab[j + 1]);
                swapped = 1;
				if(swapped == 1){
					printf("Swapped: ");
					print_array(tab, size); // Log array after swap
				}
            } else {
				printf("Skipping...\n");
			}
            j++;
        }
        
        if (swapped == 0) {
            printf("No swaps made, array is sorted.\n");
            break; // The array is sorted
        }
        
        i++;
    }

    printf("Sorted array: ");
    print_array(tab, size); // Log final sorted array
}

int main(void) {
    int variables[5] = {3, 8, 4, 0, 3};
    ft_sort_int_tab(variables, 5);
    return 0;
}


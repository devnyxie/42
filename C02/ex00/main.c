#include <stdio.h>

// Function declaration
char *ft_strcpy(char *dest, const char *src);

int main(void)
{
    char src[] = "Hello, World!";
    char dest[50]; // Ensure the destination buffer is large enough

    ft_strcpy(dest, src);

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}


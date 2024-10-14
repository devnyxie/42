#include <stdio.h>

/*
    Capitalizes the first letter of each word in a string
    and converts all other letters to lowercase.
    A word is defined as a string of alphanumeric characters.

    if newWorld is true (1) and it's lowercased alpha-num char, we make it uppercased one.
    if newWorld is false (0) and it's uppercases alpha-num char, we make it lowercased one.

    * [newWorld] -> 1 indicates the start of a new word.
    We assign 0 when we encounter an alpha-num char, and 1 when we don't.
 */
char *ft_strcapitalize(char *str) {
    int i = 0;
    int newWord = 1;

    while (str[i] != '\0') {
        if (newWord && str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        } else if (!newWord && str[i] >= 'A' && str[i] <= 'Z') {
            str[i] += 32;
        }

        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || 
            (str[i] >= '0' && str[i] <= '9')) {
            newWord = 0;
        } else {
            newWord = 1;
        }

        i++;
    }
    return str;
}

int main() {
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    
    printf("Original: %s\n", str);
    printf("Capitalized: %s\n", ft_strcapitalize(str));

    return 0;
}
#include <stdio.h>

// res is 1 by default (only digits).
// in the loop we traverse through each char, and if it´s NOT digit, we assign res to 0.
int ft_str_is_numeric(char *str) {
    int i;
    int res;

    i = 0; 
    res = 1; 
    while (str[i] != '\0') {
        if (!(str[i] >= 48 && str[i] <= 57)) { 
            res = 0;
            break;
        }
        i++;
    }
    return res;
}
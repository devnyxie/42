// We must return the difference between the first different character in the two stringsm, but only up to n characters.
// Our approach:
// *  We will iterate through the strings until we reach the n-th (i < n) character or the end of the string, 
//    first different character (s1[i] != s2[i]) or the end of the string (s1[i] && s2[i]).
// *  If we reach the n-th character, we return 0.
// *  If we reach the end of the string but n is not reached, we return the difference between the first different character.

#include <stdio.h>

int ft_strncmp(char *s1, char *s2, int n)
{
    int i = 0;
    
    while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
    {
        i++;
    }

    if (i == n)
        return 0;

    return s1[i] - s2[i];
}

// int main(void)
// {
//     char *str1 = "Hello";
//     char *str2 = "Hello World!";
//     int output = ft_strncmp(str1, str2, 5);
//     printf("%d\n", output);
//     return(0);
// }
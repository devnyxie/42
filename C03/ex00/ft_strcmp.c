// We must return the difference between the first different character in the two strings.

#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    
    while (s1[i] && s2[i])
    {
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
        i++;
    }

    return s1[i] - s2[i];
}

// int main(void)
// {
//     char *str1 = "Hello World!";
//     char *str2 = "Hello";
//     int output = ft_strcmp(str1, str2);
//     printf("%d\n", output);
//     return 0;
// }


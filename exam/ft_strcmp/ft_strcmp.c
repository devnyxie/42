#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    while(*s1 && (*s1 == *s2)){
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

int main(void)
{
    char *s1 = "Hi!";
    char *s2 = "World!";
    int result = ft_strcmp(s1, s2);
    printf("%d\n", result);
    return result;
}

#include <stdio.h>

char *alpha_mirror(char *str){
    char *start = str;
    while(*str){
        if(*str >= 'a' && *str <= 'z'){
            *str = 'z' - (*str - 'a');
        } else if (*str >= 'A' && *str <= 'Z'){
            *str = 'Z' - (*str - 'A');
        }
        str++;
    }
    return (start);
}

int main(void){
    char str[] = "ttt";
    printf("before: %s\n", str);
    printf("after: %s\n", alpha_mirror(str));
    return 0;
}
#include <stdio.h>

char *search_and_replace(char *str, char to_find, char replace){
    if (str == NULL) return NULL;
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] == to_find){
            str[i] = replace;
        }
        i++;
    }
    return (str);
}

int main(void){
    char string[] = "hello";
    char to_find = 'l';
    char replace = 'X';
    printf("Output: %s", search_and_replace(string, to_find, replace));
}
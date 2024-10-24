#include <stdlib.h>
#include <stdio.h>

int ft_strlen(const char *str){
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

char *ft_strdup(const char *s1){
    if (s1 == NULL) return NULL;
    
    char *dup_str = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
    if (dup_str == NULL) return NULL;

    char *start_dup_str = dup_str;
    while(*s1){
        *dup_str = *s1;
        s1++;
        dup_str++;
    }
    *dup_str = '\0';

    return start_dup_str;
}

// int main(void){
//     char *str_to_copy = "Hello World!";
//     printf("Result: %s", ft_strdup(str_to_copy));
// }
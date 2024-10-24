#include <stdio.h>

int ft_strlen(char *str)
{
	int count;
	
	count = 0;
	while(str[count] != '\0')
	{
		count++;
	}
	return(count);
}

int wdmatch(char *s1, char *s2){
    if(*s1 == '\0')
         return (*s2 == '\0');  // return 1 if s2 is also empty, otherwise return 0
    if(*s2 == '\0')
        return 1;
    while(*s1){
        if(*s1 == *s2){
            s2++;
        }
        s1++;
    }
    return (*s2 == '\0'); // if s2 is finished, return 1; otherwise, return 0
}

int main() {
    char *s1 = "abcde";
    char *s2 = "ace";
    
    if (wdmatch(s1, s2)) {
        printf("'%s' can be formed from '%s'\n", s2, s1);
    } else {
        printf("'%s' cannot be formed from '%s'\n", s2, s1);
    }

    return 0;
}
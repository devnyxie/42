#include <stdio.h>
#include <limits.h>

char	*ft_skip_whitespace(char *str) {
    while (*str == ' ' || (*str >= '\t' && *str <= '\r')) {
        str++;
    }
    return str;
}

int ft_atoi(char *str){
    int res = 0;
    int negative_c = 0;
    int sign = 1;

    str = ft_skip_whitespace(str);

    while(*str == '-' || *str == '+'){
        if(*str == '-'){
            negative_c++;
        }
        str++;
    }

    if(negative_c % 2 != 0)
        sign = -1;

    while(*str >= '0' && *str <= '9'){
        res = res * 10 + (*str - '0');
        str++;
    }
    return (res * sign);
}
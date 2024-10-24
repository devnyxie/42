#include <stdio.h>

int is_prime(int num){
    if(num <= 1)
        return 0;
    int i = 2;
    while(i * i <= num){
        if(num % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int add_prime_sum(int limit){
    int res = 0;
    int i = 0;
    while(i <= limit){
        if(is_prime(i)){
            res += i;
        }
        i++;
    }
    return res;
}

int main(void){
    int limit = 20;
    printf("Res: %i", add_prime_sum(limit)); //77 :)
    return 0;
}
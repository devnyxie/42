int ft_str_is_uppercase(char *str) {
    int i;
    int res;

    i = 0; 
    res = 1;
    while (str[i] != '\0') {
        if (!(str[i] >= 65 && str[i] <= 90)) { 
            res = 0;
            break;
        }   
        i++;
    }
    return res;
}
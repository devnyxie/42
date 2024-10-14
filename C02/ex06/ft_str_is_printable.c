int ft_str_is_printable(char *str) {
    int i;
    int res;

    i = 0; 
    res = 1;
    while (str[i] != '\0') {
        if (!(str[i] >= 32 && str[i] <= 126)) { 
            res = 0;
            break;
        }   
        i++;
    }
    return res;
}
int ft_str_is_lowercase(char *str) {
    int i;
    int res;

    i = 0; 
    res = 1;
    while (str[i] != '\0') {
        if (!(str[i] >= 97 && str[i] <= 122)) { 
            res = 0;
            break;
        }
        i++;
    }
    return res;
}
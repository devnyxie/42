char *ft_strrev(char *str) {
    if (!str) return NULL;

    char *start = str;
    char *end = str;

    while (*end) {
        end++;
    }
    end--;

    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    return str;
}

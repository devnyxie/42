/*
 * We move *ptr (destination pointer) to the last char of DEST string and start adding SRC chars.
 * Then we simply add a null pointer at the end;
 */
char    *ft_strcat(char* dest, const char* src) {
    char* ptr = dest;
    
    while (*ptr != '\0') {
        ptr++;
    }
    
    while (*src != '\0') {
        *ptr = *src;
        ptr++;
        src++;
    }
    
    *ptr = '\0';
    
    return dest;
}


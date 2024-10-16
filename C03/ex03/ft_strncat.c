/*
 * We move *ptr (destination pointer) to the last char of DEST string and start adding SRC chars.
 * Then we simply add a null pointer at the end;
 * nb is the maximum number of characters to be copied from the source string.
 */
char    *ft_strncat(char* dest, const char* src, unsigned int nb) {
    char* ptr = dest;
    
    while (*ptr != '\0') {
        ptr++;
    }

    unsigned int i = 0;
    
    while (*src != '\0' && i < nb) {
        *ptr++ = *src++;
        i++;
    }
    
    *ptr = '\0';
    
    return dest;
}


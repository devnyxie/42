/*
 * size is the size of the destination buffer that should not be exceeded.
 * @return value: the total length of the string that would have been created if there was no size restriction (src + dest).
 */
unsigned int ft_strlcat(char *dest, char *src, unsigned int size){
    unsigned int size_src;
    unsigned int size_dest;
    char *p_dest;
    unsigned int available_space;

    size_src = 0;
    size_dest = 0;
    while(src[size_src] != '\0'){
        size_src++;
    }
    while(dest[size_dest] != '\0'){
        size_dest++;
    }

    // case where there's not enough space to append anything.
    if(size_dest >= size)
        return size_src + size;

    // determine the available space in the destination buffer
    available_space = size - size_dest - 1;

    // move the pointer to the end of the destination buffer
    p_dest = dest + size_dest;

    while(*src && available_space > 0){
        *p_dest++ = *src++;
        available_space--;
    }

    // null termination
    *p_dest = '\0';

    // return
    return(size_dest + size_src);
}
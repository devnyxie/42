// A better, but harder version of strcpy
/*
1. create a var ptr and assign it to destination address (1st char).
2. add each char from src to ptr by dereferencing both ptr and src (++);
3. add a null pointer
4. return dest (address of the 1st char);
*/
char *better_strcpy(char *dest, const char *src) {
    char *ptr = dest;
    while (*src != '\0') {
        *ptr++ = *src++;
    }
    *ptr = '\0';
    return dest;
}



/*
A pointer points to the first char of the string.
1. we create temp var in order to save the location of the first byte (dest);
2. we transfer each char to "dest".
3. we add a null pointer.
4. we return a pointer to dest (1st char of the string).  
*/
char	*ft_strcpy(char *dest, char *src)
{
	char *temp = dest;
	int index = 0;
	while (src[index]!= '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return temp;
	
}

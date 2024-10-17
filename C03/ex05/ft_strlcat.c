/*
 * The strlcat() function appends the NUL-terminated string src to the end of dest. It will append at most (size - strlen(dest) - 1) bytes, NUL-terminating the result.
 * size is the size of the destination buffer that should not be exceeded.
 * @return value: the total length of the string that would have been created if there was no size restriction (src + dest).
 */
unsigned int	get_string_length(char *str)
{
	unsigned int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	size_dest;
	unsigned int	size_src;
	unsigned int	available_space;
	char			*p_dest;

	size_dest = get_string_length(dest);
	size_src = get_string_length(src);
	if (size_dest >= size)
		return (size_src + size);
	available_space = size - size_dest - 1;
	p_dest = dest + size_dest;
	while (*src && available_space > 0)
	{
		*p_dest++ = *src++;
		available_space--;
	}
	*p_dest = '\0';
	return (size_dest + size_src);
}

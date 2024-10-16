/*
 * ft_strstr - Locates a substring within a string.
 *
 * *str_ptr - Pointer to the current character in the string (str).
 * *find_ptr - Pointer to the current character in the substring (to_find).
 * *match_start - Pointer to the start of the match.
 * All three are reset at each iteration if the char in the string and substring do not match.
 *
 * If there is a match (str_ptr and find_ptr are not null and the chars match), we increment both pointers until we reach the end of the substring:)
 */
char	*ft_strstr(char *str, char *to_find)
{
	char	*str_ptr;
	char	*find_ptr;
	char	*match_start;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		str_ptr = str;
		find_ptr = to_find;
		match_start = str;
		while (*str_ptr && *find_ptr && *str_ptr == *find_ptr)
		{
			str_ptr++;
			find_ptr++;
		}
		if (*find_ptr == '\0')
			return (match_start);
		str++;
	}
	return (NULL);
}

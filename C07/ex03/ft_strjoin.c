/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafanasi <tafanasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 12:52:19 by tafanasi          #+#    #+#             */
/*   Updated: 2024/10/23 12:55:11 by tafanasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strcat(char *dest, const char *src)
{
	char	*ptr;

	ptr = dest;
	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}

// func to count chars in an 2D array
int	ft_countchars(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			c++;
			j++;
		}
		if (i < size - 1)
			c = c + ft_strlen(sep);
		i++;
	}
	return (c);
}

void	ft_transform(int size, char **strs, char *sep, char *allocated_str)
{
	int	i;

	allocated_str[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(allocated_str, strs[i]);
		if (i < size - 1)
			ft_strcat(allocated_str, sep);
		i++;
	}
}

// receive 2D arr of strings
// return a simple string
char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*allocated_str;

	if (size == 0)
	{
		return ((char *)malloc(1));
	}
	allocated_str = (char *)malloc((ft_countchars(size, strs, sep) + 1)
			* sizeof(char));
	if (!allocated_str)
	{
		return (NULL);
	}
	allocated_str[0] = '\0';
	ft_transform(size, strs, sep, allocated_str);
	return (allocated_str);
}
// int main() {
//     // Test Case 1: Normal case
//     char *strs1[] = {"Hello", "world", "from", "ft_strjoin!"};
//     char *sep1 = " ";
//     char *result1 = ft_strjoin(4, strs1, sep1);
//     printf("Result 1: '%s'\n", result1);
//     free(result1); // Remember to free the allocated memory

//     // Test Case 2: Empty strings
//     char *strs2[] = {"", "", "empty", ""};
//     char *sep2 = ", ";
//     char *result2 = ft_strjoin(4, strs2, sep2);
//     printf("Result 2: '%s'\n", result2);
//     free(result2); // Remember to free the allocated memory

//     // Test Case 3: No strings
//     char *result3 = ft_strjoin(0, NULL, sep2);
//     printf("Result 3: '%s'\n", result3); // Expecting an empty string
//     free(result3); // Remember to free the allocated memory

//     // Test Case 4: Single string
//     char *strs4[] = {"JustOneString"};
//     char *result4 = ft_strjoin(1, strs4, sep1);
//     printf("Result 4: '%s'\n", result4);
//     free(result4); // Remember to free the allocated memory

//     // Test Case 5: With a different separator
//     char *strs5[] = {"One", "Two", "Three"};
//     char *sep5 = " - ";
//     char *result5 = ft_strjoin(3, strs5, sep5);
//     printf("Result 5: '%s'\n", result5);
//     free(result5); // Remember to free the allocated memory

//     return (0);
// }
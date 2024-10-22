/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafanasi <tafanasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:40:59 by tafanasi          #+#    #+#             */
/*   Updated: 2024/10/22 16:01:22 by tafanasi         ###   ########.fr       */
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

char	*ft_strdup(char *src)
{
	char	*ptr;
	char	*start_ptr;
	int		src_c;

	src_c = ft_strlen(src);
	ptr = (char *)malloc((src_c + 1) * 1);
	start_ptr = ptr;
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (*src)
	{
		*ptr = *src;
		src++;
		ptr++;
	}
	*ptr = '\0';
	return (start_ptr);
}
// Main function for testing
// int main() {
//     char *original = "Hello, World!";
//     char *duplicate = ft_strdup(original);

//     if (duplicate != NULL) {
//         printf("Original: %s\n", original);
//         printf("Duplicate: %s\n", duplicate);
//         free(duplicate); // Free the allocated memory
//     } else {
//         printf("Memory allocation failed\n");
//     }

//     return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafanasi <tafanasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 20:01:23 by tafanasi          #+#    #+#             */
/*   Updated: 2024/10/21 05:16:17 by tafanasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_size;
	unsigned int	src_size;

	dest_size = 0;
	while (dest[dest_size] != '\0')
	{
		dest_size++;
	}
	src_size = 0;
	while (src[src_size] != '\0')
		src_size++;
	if (size <= dest_size)
		return (size + src_size);
	i = 0;
	while (src[i] != '\0' && (dest_size + i) < (size - 1))
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest_size + src_size);
}
// int	main(void)
// {
// 	char dest[50] = "Hello, ";
// 	char src[] = "World!";
// 	unsigned int size = 15;
// 	unsigned int result;

// 	printf("Before concatenation:\n");
// 	printf("Destination: '%s'\n", dest);
// 	printf("Source: '%s'\n", src);

// 	result = ft_strlcat(dest, src, size);

// 	printf("\nAfter concatenation:\n");
// 	printf("Destination: '%s'\n", dest);
// 	printf("Returned value: %u\n", result);

// 	return (0);
// }
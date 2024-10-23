/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devnyxie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:33:14 by devnyxie          #+#    #+#             */
/*   Updated: 2024/10/22 16:43:12 by devnyxie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int diff(int min, int max)
{
	return (max - min);
}

int *ft_range(int min, int max)
{
	int size_needed;
	int i;
	int *array;

	i = 0;
	size_needed = diff(min, max);
	if(size_needed <= 0)
		return NULL;
	// allocate size_needed memory
	array = (int*)malloc(size_needed * sizeof(int));
	if(!array)
		return NULL;
	
	//fill the array
	while(i < size_needed)
	{
		array[i] = min + i;
		i++;
	}
	return array;
}
// int main() {
//     int min, max;
//     int *result;
//     int i, size;

//     // Test Case 1: Normal case
//     min = 3;
//     max = 7;
//     result = ft_range(min, max);
//     if (result) {
//         size = max - min;
//         printf("ft_range(%d, %d): ", min, max);
//         for (i = 0; i < size; i++) {
//             printf("%d ", result[i]);
//         }
//         printf("\n");
//         free(result); // Don't forget to free the allocated memory!
//     } else {
//         printf("ft_range(%d, %d): NULL\n", min, max);
//     }

//     // Test Case 2: min equal to max
//     min = 5;
//     max = 5;
//     result = ft_range(min, max);
//     if (result == NULL) {
//         printf("ft_range(%d, %d): NULL\n", min, max);
//     }

//     // Test Case 3: min greater than max
//     min = 10;
//     max = 5;
//     result = ft_range(min, max);
//     if (result == NULL) {
//         printf("ft_range(%d, %d): NULL\n", min, max);
//     }

//     // Test Case 4: Large range
//     min = -5;
//     max = 5;
//     result = ft_range(min, max);
//     if (result) {
//         size = max - min;
//         printf("ft_range(%d, %d): ", min, max);
//         for (i = 0; i < size; i++) {
//             printf("%d ", result[i]);
//         }
//         printf("\n");
//         free(result);
//     } else {
//         printf("ft_range(%d, %d): NULL\n", min, max);
//     }

//     return 0;
// }

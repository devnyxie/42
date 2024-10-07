/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafanasi <tafanasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 02:50:12 by tafanasi          #+#    #+#             */
/*   Updated: 2024/10/07 02:51:39 by tafanasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// num 42 -> c1 = '4'
// num 42 -> c2 = '2'
void	write_number(int num)
{
	char	c1;
	char	c2;

	c1 = '0' + (num / 10);
	c2 = '0' + (num % 10);
	write(1, &c1, 1);
	write(1, &c2, 1);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 < 99)
	{
		num2 = num1 + 1;
		while (num2 < 100)
		{
			write_number(num1);
			write(1, " ", 1);
			write_number(num2);
			if (num1 < 98 || num2 < 99)
				write(1, ", ", 2);
			num2++;
		}
		num1++;
	}
}

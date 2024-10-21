/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafanasi <tafanasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 07:43:30 by tafanasi          #+#    #+#             */
/*   Updated: 2024/10/21 07:46:08 by tafanasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	unsigned int	res;

	res = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		res = res * nb;
		nb--;
	}
	return (res);
}

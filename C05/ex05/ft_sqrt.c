/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafanasi <tafanasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:18:17 by tafanasi          #+#    #+#             */
/*   Updated: 2024/10/21 13:18:20 by tafanasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	sqrt_helper(int nb, int guess)
{
	if (guess * guess == nb)
		return (guess);
	if (guess * guess > nb)
		return (0);
	return (sqrt_helper(nb, guess + 1));
}

int	ft_sqrt(int nb)
{
	if (nb < 0)
		return (0);
	return (sqrt_helper(nb, 1));
}

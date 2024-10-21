/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafanasi <tafanasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:18:54 by tafanasi          #+#    #+#             */
/*   Updated: 2024/10/21 13:18:56 by tafanasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// modificated sqrt_helper, which works also with non-perfect squares
int	sqrt_helper(int nb, int guess)
{
	if (guess * guess == nb)
		return (guess);
	if (guess * guess > nb)
		return (guess - 1);
	return (sqrt_helper(nb, guess + 1));
}

int	ft_sqrt(int nb)
{
	if (nb < 0)
		return (0);
	return (sqrt_helper(nb, 1));
}

// returns 1 if prime, 0 if not
int	ft_is_prime(int nb)
{
	int	i;
	int	sqrt;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	i = 2;
	sqrt = ft_sqrt(nb);
	while (i <= sqrt)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}

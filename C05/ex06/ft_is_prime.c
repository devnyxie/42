#include <stdio.h>

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
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("49: %i", ft_is_prime(49));
// 	printf("589: %i", ft_is_prime(589));

// 	return (0);
// }
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
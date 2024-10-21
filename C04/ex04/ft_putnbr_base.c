/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafanasi <tafanasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 06:28:58 by tafanasi          #+#    #+#             */
/*   Updated: 2024/10/21 06:29:00 by tafanasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	val_base(char *str, int len)
{
	int	i;
	int	j;

	i = 0;
	if (len <= 1)
		return (0);
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[j] == str[i])
				return (0);
			if (str[j] == '+' || str[j] == '-')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;
	long	nb;

	len = ft_strlen(base);
	nb = nbr;
	if (!val_base(base, len))
		return ;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= len)
	{
		ft_putnbr_base(nb / len, base);
	}
	ft_putchar(base[nb % len]);
}
// int main()
// {
//     long long int a = -2147483648;
//     ft_putnbr_base(a, "01");
//     write(1, "\n", 1);
//     return (0);
// }

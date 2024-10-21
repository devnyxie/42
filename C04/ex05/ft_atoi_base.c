/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafanasi <tafanasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 06:40:24 by tafanasi          #+#    #+#             */
/*   Updated: 2024/10/21 06:40:26 by tafanasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// validates the base
int	val_base(char *str, int size)
{
	int	i;
	int	j;

	i = 0;
	if (size <= 1)
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

int	count_base(char *base)
{
	int	i;

	i = 0;
	while (*base)
	{
		i++;
		base++;
	}
	return (i);
}

// returns the index of the character in the base, which is its value.
int	get_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

// two ** in order to access the value of str
// return's '-1' or '1'
int	ft_manage_sign(char **str)
{
	int	sign;
	int	neg_count;

	sign = 1;
	neg_count = 0;
	while (**str == '-' || **str == '+')
	{
		if (**str == '-')
		{
			neg_count++;
		}
		(*str)++;
	}
	if (neg_count % 2 != 0)
		sign = -1;
	return (sign);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_len;
	int	response;
	int	sign;
	int	current_value;

	response = 0;
	base_len = count_base(base);
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	sign = ft_manage_sign(&str);
	current_value = get_value(*str, base);
	while (current_value != -1)
	{
		response = response * base_len + current_value;
		str++;
		current_value = get_value(*str, base);
	}
	return ((response * sign));
}

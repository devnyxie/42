/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafanasi <tafanasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 06:06:04 by tafanasi          #+#    #+#             */
/*   Updated: 2024/10/21 06:06:05 by tafanasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// removes whitespaces and returns a new string.
char	*ft_skip_whitespace(char *str)
{
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	return (str);
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

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	str = ft_skip_whitespace(str);
	sign = ft_manage_sign(&str);
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
// int main(void){
// 	char *str = "-123";
// 	int result = ft_atoi(str);
// 	printf("%i", result);
// 	return(0);
// }

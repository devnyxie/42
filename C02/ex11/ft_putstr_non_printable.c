/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafanasi <tafanasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:30:02 by tafanasi          #+#    #+#             */
/*   Updated: 2024/10/15 19:30:04 by tafanasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// hex[2] 'cuz we need only 2 bytes actually for the hex
void	ft_putstr_non_printable(char *str)
{
	char	hex[2];

	while (*str)
	{
		if (*str >= 32 && *str <= 126)
		{
			write(1, str, 1);
		}
		else
		{
			write(1, "\\", 1);
			hex[0] = "0123456789abcdef"[(*str >> 4) & 0xf];
			hex[1] = "0123456789abcdef"[*str & 0xf];
			write(1, hex, 2);
		}
		str++;
	}
}
/*
int	main(void)
{
	char	str[1024] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(str);
	// printf("%s", str);
	return (0);
}
*/

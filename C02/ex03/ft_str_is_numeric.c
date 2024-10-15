/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafanasi <tafanasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:30:59 by tafanasi          #+#    #+#             */
/*   Updated: 2024/10/15 19:31:18 by tafanasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// res is 1 by default (only digits).
// in the loop we traverse through each char, and if it´s NOT digit,
// we assign res to 0.
int	ft_str_is_numeric(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str[i] <= 57))
		{
			res = 0;
			break ;
		}
		i++;
	}
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafanasi <tafanasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:07:03 by tafanasi          #+#    #+#             */
/*   Updated: 2024/10/21 16:07:04 by tafanasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int args, char **argv)
{
	int		j;

	if (args > 1)
	{
		while (argv[args - 1] && args != 1)
		{
			j = 0;
			while (argv[args - 1][j])
			{
				write(1, &argv[args - 1][j], 1);
				j++;
			}
			write(1, "\n", 1);
			args--;
		}
	}
	return (0);
}

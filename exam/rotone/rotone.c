/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafanasi <tafanasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 20:18:38 by tafanasi          #+#    #+#             */
/*   Updated: 2024/10/10 20:48:52 by tafanasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])

{
	char *str = argv[1];
	int i;
	char newline = '\n';

	if (argc > 1)
	{
		i = 0;
		while (str[i] != '\0')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				if (str[i] == 'z')
				{
					str[i] = 'a';
				}
				else
				{
					str[i] = str[i] + 1;
				}
			}
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				if (str[i] == 'Z')
				{
					str[i] = 'A';
				}
				else
				{
					str[i] = str[i] + 1;
				}
			}
			write(1, &str[i], 1);
			i++;
		}
	}
	write(1, &newline, 1);
	return(0);
}

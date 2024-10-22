/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafanasi <tafanasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:07:51 by tafanasi          #+#    #+#             */
/*   Updated: 2024/10/10 20:17:19 by tafanasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char newline = '\n';
	int i;

	i = 0;
	if(argc > 1)
	{
		char *str = argv[1];
 		while (str[i] != '\0')
 		{   
 			if (str[i] >= 'A' && str[i] <= 'Z')
 			{   
 				str[i] = str[i] + 32;
 				write(1, &str[i], 1);
 			}
			else if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
				write(1, &str[i], 1);
			}
			else {
				write(1, &str[i], 1);
			}
 			i++;
 		}
	}
	write(1, &newline, 1);
	return 0;
}

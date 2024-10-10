/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafanasi <tafanasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 19:51:39 by tafanasi          #+#    #+#             */
/*   Updated: 2024/10/10 20:06:06 by tafanasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;
	i = 0;
	while ( str[i] != '\0')

	{
		write(1, &str[i], 1);
		i++;
	}

}
/*
int	main(void)

{
	char *str = "How are you doing";
	ft_putstr(str);
	return(0);
}*/

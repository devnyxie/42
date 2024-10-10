/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafanasi <tafanasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 17:14:02 by tafanasi          #+#    #+#             */
/*   Updated: 2024/10/10 17:55:53 by tafanasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
	int count;
	
	count = 0;
	while(str[count] != '\0')
	{
		count++;
	}
	return(count);
}
/*
int main(void){
	char *str = "Zdravstvu  jte";
	int count = ft_strlen(str);
	printf("Length: %d", count);
	printf("The length of the string '%s' is: %d\n", str, count);
	return(0);
}
*/

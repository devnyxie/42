/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafanasi <tafanasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:54:23 by tafanasi          #+#    #+#             */
/*   Updated: 2024/10/17 19:54:25 by tafanasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, int n)
{
	int	i;

	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
// int main(void)
// {
//     char *str1 = "Hello";
//     char *str2 = "Hello World!";
//     int output = ft_strncmp(str1, str2, 5);
//     printf("%d\n", output);
//     return(0);
// }

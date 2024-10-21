/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafanasi <tafanasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 20:00:12 by tafanasi          #+#    #+#             */
/*   Updated: 2024/10/17 20:00:14 by tafanasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*str_ptr;
	char	*find_ptr;
	char	*match_start;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		str_ptr = str;
		find_ptr = to_find;
		match_start = str;
		while (*str_ptr && *find_ptr && *str_ptr == *find_ptr)
		{
			str_ptr++;
			find_ptr++;
		}
		if (*find_ptr == '\0')
			return (match_start);
		str++;
	}
	return (0);
}

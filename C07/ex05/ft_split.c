/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafanasi <tafanasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:06:21 by tafanasi          #+#    #+#             */
/*   Updated: 2024/10/23 15:07:01 by tafanasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (*str == *charset)
		{
			in_word = 0;
		}
		else
		{
			if (in_word == 0)
			{
				in_word = 1;
				count++;
			}
		}
		str++;
	}
	return (count);
}

// moulinette will not even reach this exercise, pushing it just in order to save the progress.
char	**ft_split(char *str, char *charset)
{
	int		i;
	int		word_count;
	char	**result;
	char	*start;
	int		word_length;

	i = 0;
	word_count = count_words(str, charset);
	result = malloc((word_count + 1) * sizeof(char *));
	while (*str)
	{
		if (*str == *charset)
		{
			str++;
			continue ;
		}
		start = str;
		while (*str && *str != *charset)
		{
			str++;
		}
		word_length = str - start;
		result[i] = malloc((word_length + 1) * sizeof(char));
		if (result[i] == NULL)
		{
			return (NULL);
		}
		for (int j = 0; j < word_length; j++)
		{
			result[i][j] = start[j];
		}
		result[i][word_length] = '\0';
		i++;
	}
	result[i] = NULL;
	return (result);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tafanasi <tafanasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:58:36 by tafanasi          #+#    #+#             */
/*   Updated: 2024/10/17 19:58:37 by tafanasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, const char *src, unsigned int nb)
{
	char			*ptr;
	unsigned int	i;

	ptr = dest;
	while (*ptr != '\0')
	{
		ptr++;
	}
	i = 0;
	while (*src != '\0' && i < nb)
	{
		*ptr++ = *src++;
		i++;
	}
	*ptr = '\0';
	return (dest);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: devnyxie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 03:08:56 by devnyxie          #+#    #+#             */
/*   Updated: 2024/10/14 03:20:32 by devnyxie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strcpy(char *dest, const char *src)
{
	char	*ptr;

	ptr = dest;
	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (*dest);
}

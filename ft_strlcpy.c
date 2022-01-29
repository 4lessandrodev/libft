/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allima-d <allima-d@student.42sp.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 01:47:16 by allima-d          #+#    #+#             */
/*   Updated: 2022/01/29 01:47:17 by allima-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	pos;
	size_t	current_size;

	if (!dest || !src)
		return (0);
	current_size = ft_strlen(src);
	if (size == 0)
		return (current_size);
	pos = 0;
	while (src[pos] != '\0' && pos < size)
	{
		dest[pos] = src[pos];
		pos++;
	}
	dest[pos] = '\0';
	return (current_size);
}

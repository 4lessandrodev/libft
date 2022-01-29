/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allima-d <allima-d@student.42sp.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 01:46:41 by allima-d          #+#    #+#             */
/*   Updated: 2022/01/29 01:46:42 by allima-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	size;
	char	*dst;
	char	*source;

	dst = (char *)dest;
	source = (char *)src;
	size = 0;
	while (size++ < n)
	{
		*dst++ = *source++;
	}
	return (dest);
}

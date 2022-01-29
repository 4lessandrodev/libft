/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allima-d <allima-d@student.42sp.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 01:47:32 by allima-d          #+#    #+#             */
/*   Updated: 2022/01/29 01:47:33 by allima-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	size;

	size = ft_strlen(s);
	if ((char)c == '\0')
		return ((char *)s + size);
	while (size--)
	{
		if (*(s + size) == c)
			return ((char *)(s + size));
	}
	return (NULL);
}

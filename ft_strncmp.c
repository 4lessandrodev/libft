/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allima-d <allima-d@student.42sp.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 01:47:27 by allima-d          #+#    #+#             */
/*   Updated: 2022/01/29 01:47:28 by allima-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t c)
{
	size_t	size;

	size = 0;
	if (c == 0)
		return (0);
	while (s1[size] != '\0' && s1[size] == s2[size] && size < (c - 1))
		size++;
	return ((unsigned char)s1[size] - (unsigned char)s2[size]);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allima-d <allima-d@student.42sp.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 23:24:03 by allima-d          #+#    #+#             */
/*   Updated: 2022/01/31 23:24:06 by allima-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*xs1;
	unsigned char	*xs2;

	i = 0;
	xs1 = (unsigned char *) s1;
	xs2 = (unsigned char *) s2;
	while (i < n)
	{
		if (xs1[i] != xs2[i])
			return (xs1[i] - xs2[i]);
		i++;
	}
	return (0);
}

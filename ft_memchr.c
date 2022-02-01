/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allima-d <allima-d@student.42sp.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 23:02:57 by allima-d          #+#    #+#             */
/*   Updated: 2022/01/31 23:25:09 by allima-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int ch, size_t n)
{
	unsigned int	i;
	unsigned char	*xstr;

	i = 0;
	xstr = (unsigned char *) str;
	while (i < n)
	{
		if (xstr[i] == (unsigned char)ch)
		{
			xstr += i;
			return ((void *)xstr);
		}
		i++;
	}
	return (NULL);
}

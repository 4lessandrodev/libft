/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allima-d <allima-d@student.42sp.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 01:46:53 by allima-d          #+#    #+#             */
/*   Updated: 2022/01/29 01:46:54 by allima-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	int		limit;
	char	*pointer;

	limit = 0;
	pointer = (char *)str;
	while (limit < n && pointer[limit] != '\0')
	{
		pointer[limit] = (char)c;
		limit++;
	}
	return (str);
}

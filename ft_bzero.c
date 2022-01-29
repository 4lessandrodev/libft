/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allima-d <allima-d@student.42sp.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 01:44:45 by allima-d          #+#    #+#             */
/*   Updated: 2022/01/29 01:45:06 by allima-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *str, size_t n)
{
	int		limit;
	char	*pointer;

	pointer = (char *)str;
	limit = 0;
	while (limit < n && pointer[limit] != '\0')
	{
		pointer[limit] = '0';
		limit++;
	}
}

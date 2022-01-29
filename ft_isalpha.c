/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allima-d <allima-d@student.42sp.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 01:45:29 by allima-d          #+#    #+#             */
/*   Updated: 2022/01/29 01:45:30 by allima-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_lower(int c)
{
	return (c >= 97 && c <= 122);
}

int	is_upper(int c)
{
	return (c >= 65 && c <= 90);
}

int	ft_isalpha(int c)
{
	return ((is_lower(c) || is_upper(c)));
}

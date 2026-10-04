/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujchoi <ujchoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 11:56:58 by ujchoi            #+#    #+#             */
/*   Updated: 2026/10/04 16:57:27 by ujchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*result;
	unsigned char	*origin;

	result = (unsigned char *)dest;
	origin = (unsigned char *)src;
	if (*result > *origin)
	{
		i = n - 1;
		while (i > 0)
		{
			result[i] = origin[i];
			i--;
		}
	}
	else if (*result < *origin)
	{
		i = 0;
		while (i < n)
		{
			result[i] = origin[i];
			i++;
		}
	}
	return (dest);
}

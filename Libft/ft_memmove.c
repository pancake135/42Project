/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujchoi <ujchoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 11:56:58 by ujchoi            #+#    #+#             */
/*   Updated: 2026/10/04 17:30:58 by ujchoi           ###   ########.fr       */
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
	if (result >= origin)
	{
		i = n;
		while (i > 0)
		{
			i--;
			result[i] = origin[i];
		}
	}
	else if (result < origin)
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

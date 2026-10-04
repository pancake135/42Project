/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujchoi <ujchoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 11:44:53 by ujchoi            #+#    #+#             */
/*   Updated: 2026/10/04 17:30:48 by ujchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*result;
	unsigned char	*origin;

	i = 0;
	result = (unsigned char *)dest;
	origin = (unsigned char *)src;
	while (i < n)
	{
		result[i] = origin[i];
		i++;
	}
	return (dest);
}

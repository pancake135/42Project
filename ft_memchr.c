/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujchoi <ujchoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 15:02:29 by ujchoi            #+#    #+#             */
/*   Updated: 2026/10/04 17:30:40 by ujchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	cl;
	size_t			i;

	i = 0;
	cl = (unsigned char)c;
	src = (unsigned char *)s;
	while (i < n)
	{
		if (src[i] == cl)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}

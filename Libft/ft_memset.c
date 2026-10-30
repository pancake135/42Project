/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujchoi <ujchoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 11:37:59 by ujchoi            #+#    #+#             */
/*   Updated: 2026/10/04 17:32:50 by ujchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	g;
	unsigned char	*ptr;

	i = 0;
	g = (unsigned char)c;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = g;
		i++;
	}
	return (s);
}

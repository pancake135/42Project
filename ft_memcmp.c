/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujchoi <ujchoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 15:27:30 by ujchoi            #+#    #+#             */
/*   Updated: 2026/10/04 17:30:44 by ujchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while(n > 0)
	{
		if (s1 != s2)
			return ((int)((unsigned char *)s1 - (unsigned char *)s2));
		n--;
		s1++;
		s2++;
	}
	return(0);
}

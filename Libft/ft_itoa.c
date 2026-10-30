/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ujchoi <ujchoi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 16:27:15 by ujchoi            #+#    #+#             */
/*   Updated: 2026/10/23 16:04:40 by ujchoi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	update_num(long num, int *sign, size_t *count)
{
	if (num <= 0)
	{
		*sign = -1;
		num = -num;
		(*count)++;
	}
	while (num > 0)
	{
		num /= 10;
		(*count)++;
	}
}

static void	make_itoa(char *result, long num, size_t count, int sign)
{
	if (num == 0)
	{
		result[0] = '0';
		return ;
	}
	if (sign < 0)
		result[0] = '-';
	while (num > 0)
	{
		result[--count] = (num % 10) + '0';
		num /= 10;
	}
}

char	*ft_itoa(int n)
{
	long	num;
	int		sign;
	size_t	count;
	char	*result;

	num = (long)n;
	sign = 1;
	count = 0;
	update_num(num, &sign, &count);
	num *= sign;
	result = malloc(sizeof(char) * (count + 1));
	if (!result)
		return (NULL);
	make_itoa(result, num, count, sign);
	result[count] = '\0';
	return (result);
}

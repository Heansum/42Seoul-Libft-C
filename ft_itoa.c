/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlim <hlim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 22:59:36 by hlim              #+#    #+#             */
/*   Updated: 2022/02/09 14:20:29 by hlim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	check_length(int n)
{
	size_t	nb;

	nb = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		nb++;
	while (n != 0)
	{
		n = n / 10;
		nb++;
	}
	return (nb);
}

char	*ft_itoa(int n)
{
	char		*str;
	size_t		length;
	long long	value;

	length = check_length(n);
	value = (long long)n;
	str = (char *)malloc(sizeof(char) * (length) + 1);
	if (str == 0)
		return (0);
	if (value < 0)
	{
		str[0] = '-';
		value *= -1;
	}
	if (value == 0)
		str[0] = '0';
	str[length] = 0;
	length -= 1;
	while (value)
	{
		str[length] = value % 10 + '0';
		value /= 10;
		length--;
	}
	return (str);
}

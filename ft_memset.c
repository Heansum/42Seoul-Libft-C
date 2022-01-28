/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlim <hlim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:17:19 by hlim              #+#    #+#             */
/*   Updated: 2022/01/28 21:40:24 by hlim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, unsigned int num)
{
	unsigned char	data;
	unsigned char	*start_ptr;

	start_ptr = (unsigned char *)ptr;
	data = (unsigned char)value;
	while (num-- > 0)
		*start_ptr++ = data;
	return (ptr);
}

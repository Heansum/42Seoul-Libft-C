/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlim <hlim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:36:15 by hlim              #+#    #+#             */
/*   Updated: 2022/02/11 18:39:35 by hlim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t cnt)
{
	unsigned char		*tmp;
	unsigned const char	*s;

	if (!dest && !src)
		return (dest);
	tmp = dest;
	s = src;
	while (cnt--)
		*tmp++ = *s++;
	return (dest);
}

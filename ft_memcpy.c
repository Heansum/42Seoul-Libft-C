/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlim <hlim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:36:15 by hlim              #+#    #+#             */
/*   Updated: 2022/01/28 15:16:09 by hlim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t cnt)
{
	char		*tmp;
	const char	*s;

	tmp = dest;
	s = src;
	while (cnt--)
		*tmp++ = *s++;
	return (dest);
}

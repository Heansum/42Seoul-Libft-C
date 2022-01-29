/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlim <hlim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 21:06:28 by hlim              #+#    #+#             */
/*   Updated: 2022/01/28 22:24:45 by hlim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p_dest;
	unsigned char		*p_src;

	if (dest == src || n == 0)
		return (dest);
	if (p_dest <= p_src)
	{
		p_dest = dest;
		p_src = (unsigned char *)src;
		while (n--)
			*p_dest++ = *p_src++;
	}
	else
	{
		p_dest = dest + (n - 1);
		p_src = (unsigned char *)src + (n - 1);
		while (n--)
			*p_dest-- = *p_src--;
	}
	return (dest);
}

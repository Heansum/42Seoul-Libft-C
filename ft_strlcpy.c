/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlim <hlim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:00:00 by hlim              #+#    #+#             */
/*   Updated: 2022/01/28 21:48:43 by hlim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(const char *dest, const char *src, size_t size)
{
	size_t		nb;
	char		*ptr;

	ptr = (char *)src;
	nb = ft_strlen((char *)src);
	if (!dest || !src)
		return (0);
	while (size-- && *src != '\0')
	{
		*dest = *ptr;
		dest++;
		ptr++;
	}
	if (size > 0)
		*dest = '\0';
	return (nb);
}

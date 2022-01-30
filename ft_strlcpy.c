/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlim <hlim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:00:00 by hlim              #+#    #+#             */
/*   Updated: 2022/01/30 22:31:52 by hlim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t		i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while ((i + 1) < size && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	if (size > 0)
		*(dest + i) = 0;
	return (ft_strlen(src));
}

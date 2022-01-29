/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlim <hlim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:13:22 by hlim              #+#    #+#             */
/*   Updated: 2022/01/28 22:20:59 by hlim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	char	*ptr;
	size_t	len;

	ptr = (char *)str;
	len = ft_strlen(ptr);
	while (len)
	{
		if (ptr[len] == ch)
			return (ptr + len);
		len--;
	}
	return (NULL);
}

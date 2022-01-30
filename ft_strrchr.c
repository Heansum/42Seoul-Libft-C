/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlim <hlim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:13:22 by hlim              #+#    #+#             */
/*   Updated: 2022/01/31 02:39:40 by hlim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	size_t	len;

	len = ft_strlen(str);
	if (ch == 0)
		return ((char *)&str[len]);
	while (len != 0)
	{
		if (str[len - 1] == (unsigned char)ch)
			return ((char *)&str[len - 1]);
		len--;
	}
	return (0);
}

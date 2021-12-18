/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlim <hlim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:13:22 by hlim              #+#    #+#             */
/*   Updated: 2021/12/15 19:14:22 by hlim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrhcr(const char *str, int ch)
{
	char	*ptr;
	int	len;

	ptr = (char *)str;
	len = (int) ft_strlen(ptr);
	while (len)
	{
		if (ptr[len] == ch)
			return (ptr + len);
		len--;
	}
	return (NULL);
}

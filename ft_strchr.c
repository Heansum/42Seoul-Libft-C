/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlim <hlim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 11:59:01 by hlim              #+#    #+#             */
/*   Updated: 2022/01/28 15:20:06 by hlim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *str, char c)
{
	char	*ptr;

	ptr = (char *)str;
	while (ptr != NULL)
	{
		if (ptr[0] == c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}

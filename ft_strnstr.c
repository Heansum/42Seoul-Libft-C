/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlim <hlim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 15:25:56 by hlim              #+#    #+#             */
/*   Updated: 2022/01/28 17:49:26 by hlim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	big_len;
	size_t	little_len;

	i = 0;
	big_len = ft_strlen(big);
	little_len = ft_strlen(little);
	if (little[i] == 0)
		return ((char *)big);
	while (big[i] != 0 || i < len)
	{
		j = 0;
		while (big[i + j] == little[j] || big_len != len)
		{
			if (j == little_len)
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (0);
}

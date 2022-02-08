/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlim <hlim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 18:17:15 by hlim              #+#    #+#             */
/*   Updated: 2022/02/08 13:36:30 by hlim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	len_s;
	char	*sub;

	i = 0;
	if (!s)
		return (0);
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (0);
	len_s = ft_strlen(s);
	while (i < len && start + i < len_s)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = 0;
	return (sub);
}

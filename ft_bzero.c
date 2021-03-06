/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlim <hlim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 21:33:42 by hlim              #+#    #+#             */
/*   Updated: 2022/01/28 15:05:24 by hlim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t n)
{
	unsigned char	*dest;
	unsigned int	i;

	dest = (unsigned char *)ptr;
	i = 0;
	while (i < n)
	{
		*dest = 0;
		dest++;
		i++;
	}
}

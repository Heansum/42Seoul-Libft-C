/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlim <hlim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 00:21:46 by hlim              #+#    #+#             */
/*   Updated: 2022/01/30 01:16:24 by hlim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t cnt, size_t size)
{
	void	*output;

	output = (void *)malloc(cnt * size);
	if (!output)
		return (0);
	ft_bzero(output, cnt * size);
	return (output);
}

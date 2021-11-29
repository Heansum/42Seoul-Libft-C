/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlim <hlim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 17:36:15 by hlim              #+#    #+#             */
/*   Updated: 2021/11/29 18:06:52 by hlim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t cnt)
{
	char		*tmp;
	const char	*s;

	tmp = dest;
	s = src;
	while (cnt--)
		*tmp++ = *s++;
	return (dest);
}

int	main(void)
{
	char	src[32] = "Source Memory";
	char	dest[32] = "Destination Memory";

	printf("Destination is %s\n", dest);
	ft_memcpy(dest, src, sizeof(src));
	printf("After memcpy, Destination is %s\n", dest);


	return (0);
}

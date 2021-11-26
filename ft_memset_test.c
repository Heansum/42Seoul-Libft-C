/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlim <hlim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 18:17:19 by hlim              #+#    #+#             */
/*   Updated: 2021/11/26 13:19:43 by hlim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *ptr, int value, unsigned int num)
{
	unsigned char	data;
	unsigned char	*start_ptr;

	start_ptr = (unsigned char *)ptr;
	data = (unsigned char)value;
	while (num-- > 0)
		*start_ptr++ = data;
	return (ptr);
}

int main(void)
{
	char str[11] = "Hello World";
	void *void_str;

	printf("%s\n", str);
	ft_memset(str, '1', 4);
	printf("%s\n", str);

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlim <hlim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 18:32:16 by hlim              #+#    #+#             */
/*   Updated: 2021/11/19 18:36:52 by hlim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char*	ft_strcpy(char *dest, char *src)
{
	char *ptr;

	ptr = dest;
	while(*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return ptr;
}

int	main(void)
{
	char src[] = "hello";
	char dest[5];

	printf("%s\n", ft_strcpy(dest, src));

	return (0);
}

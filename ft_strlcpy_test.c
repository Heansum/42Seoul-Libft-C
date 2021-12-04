/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlim <hlim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:00:00 by hlim              #+#    #+#             */
/*   Updated: 2021/12/04 15:26:11 by hlim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t		nb;
	char		*ptr;

	ptr = (char *)src;
	nb = ft_strlen((char *)src);
	if (!dest || !src)
		return (0);
	while (size-- && *src != '\0')
	{
		*dest = *ptr;
		dest++;
		ptr++;
	}
	if (size > 0)
		*dest = '\0';
	return (nb);
}

int	main(void)
{
	char	*src = "123456";
	char	dest[20];

	size_t ret = ft_strlcpy(dest, src, 4);
	printf("dest = %s\nreturn = %zu", dest, ret);

	return (0);
}

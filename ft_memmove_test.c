/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlim <hlim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 21:06:28 by hlim              #+#    #+#             */
/*   Updated: 2021/12/05 22:43:29 by hlim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;
	size_t		i;

	if (dest == src || n == 0)
		return (dest);
	i = 0;
	if (p_dest <= p_src)
	{
		p_dest = dest;
		p_src = (unsigned char *)src;
		while (i++ < n)
			*p_dest++ = *p_src++;
	}
	else
	{
		p_dest = dest + (n - 1);
		p_src = (unsigned char *)src + (n - 1);
		while (i++ < n)
			*p_dest-- = *p_src--;
	}
	return (dest);
}

int	main(void)
{
	char str[] = "12345678";
	
	ft_memmove(str + 3, str + 1, 3);
	printf("%s\n", str);


	return (0);
}

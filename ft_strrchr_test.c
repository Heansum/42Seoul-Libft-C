/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlim <hlim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 12:32:43 by hlim              #+#    #+#             */
/*   Updated: 2021/12/02 13:03:03 by hlim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(const char *str)
{
	int	nb;

	nb = 0;
	while (*str++)
		nb++;
	return (nb);
}

const char	*ft_strrchr(const char *str, int ch)
{
	char	*ptr;
	int	len;

	ptr = (char *)str;
	len = ft_strlen(ptr);
	while (len)
	{
		if (ptr[len] == ch)
			return (ptr + len);
		len--;
	}
	return (NULL);
}

int	main(void)
{
	char	str[11] = "Hello World";
	int	nb;
	const char	*ptr;

	nb = ft_strlen(str); 
	printf("%d\n", nb);
	printf("%s\n", str);
	ptr = ft_strrchr(str, 'o');
	printf("%s\n", ptr);	

	return (0);
}


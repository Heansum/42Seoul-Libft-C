/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlim <hlim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 11:59:01 by hlim              #+#    #+#             */
/*   Updated: 2021/12/02 12:20:39 by hlim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(char *str, char c)
{
	char *ptr;

	ptr = str;
	while (ptr != NULL)
	{
		if (ptr[0] == c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}

int	main(void)
{
	char str[11] = "Hello World";
	char *ptr;
	
	ptr = str;
	printf("%s", ptr);
	ptr = ft_strchr(str, 'o');
	printf("%s", ptr);
	
	return (0);


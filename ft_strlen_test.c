/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlim <hlim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 18:10:06 by hlim              #+#    #+#             */
/*   Updated: 2021/11/19 18:30:15 by hlim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	tmp;

	tmp = 0;
	while (*str)
	{
		tmp++;
		str++;
	}
	return (tmp);
}

int	main(void)
{
	char	str[];
	int		str_len;

	str = "hello";
	str_len = ft_strlen(str);
	printf("%d", str_len);
	return (0);
}

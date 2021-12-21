/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlim <hlim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 12:32:43 by hlim              #+#    #+#             */
/*   Updated: 2021/12/15 21:30:06 by hlim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int ch);
int	ft_strlen(char *str);

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

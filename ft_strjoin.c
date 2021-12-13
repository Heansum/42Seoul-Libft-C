/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlim <hlim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 20:03:21 by hlim              #+#    #+#             */
/*   Updated: 2021/12/13 21:27:47 by hlim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*ret;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	ret = (char *)malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!ret)
		return (NULL);
	ft_memcpy(ret, s1, len_s1);
	ft_memcpy(ret + len_s1, s2, len_s2);
	ret[len_s1 + len_s2] = 0;
	return (ret);
}

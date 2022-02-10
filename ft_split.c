/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlim <hlim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 14:24:55 by hlim              #+#    #+#             */
/*   Updated: 2022/02/10 11:28:26 by hlim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**do_free(char **s)
{
	size_t	i;

	i = 0;
	while (s[i] != 0)
	{
		free(s[i]);
		i++;
	}
	free(s[i]);
	return (0);
}

static char	**do_split(char **str, char const *s, char c, size_t cnt)
{
	size_t	i;
	size_t	j;
	size_t	next;

	i = 0;
	j = 0;
	while (s[i] != 0 && j < cnt)
	{
		if (s[i] != c)
		{
			next = i + 1;
			while (s[next] != 0 && s[next] != c)
				next++;
			str[j] = ft_substr(s, i, next - i);
			if (str[j] == 0)
				return (do_free(str));
			j++;
			i = next;
		}
		else
			i++;
	}
	str[i] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	word_cnt;
	size_t	i;

	if (s == 0)
		return (NULL);
	i = 0;
	word_cnt = 0;
	while (s[i] != 0)
	{
		if (s[i] != c)
		{
			word_cnt++;
			while ((s[i] != c) && s[i] != 0)
				i++;
		}
		else
			i++;
	}
	str = (char **)malloc(sizeof(char *) * (word_cnt + 1));
	if (str == 0)
		return (0);
	do_split(str, s, c, word_cnt);
	return (str);
}

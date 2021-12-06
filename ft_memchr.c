/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlim <hlim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 22:36:28 by hlim              #+#    #+#             */
/*   Updated: 2021/12/06 23:29:40 by hlim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int ch, size_t nb)
{
	unsigned char	*s_ptr;
	unsigned char	chr;

	chr = ch;
	s_ptr = (unsigned char *)s;
	while (nb--)
	{
		if (*s_ptr == chr)
			return (s_ptr);
		s_ptr++;
	}
	return (0);
}

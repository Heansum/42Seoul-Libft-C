/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlim <hlim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 18:24:27 by hlim              #+#    #+#             */
/*   Updated: 2021/11/19 18:24:42 by hlim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islower(char ch)
{
	if (ch >= 97 & ch <= 122)
		return (1);
	else
		return (0);
}
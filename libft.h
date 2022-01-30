/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlim <hlim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:50:36 by hlim              #+#    #+#             */
/*   Updated: 2022/01/31 00:17:19 by hlim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define  LIBFT_H

# include <stddef.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

int			ft_atoi(const char *str);
int			ft_isalnum(int ch);
int			ft_isalpha(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_islower(char ch);
int			ft_isprint(int ch);
int			ft_isupper(char ch);
int			ft_memcmp(const void *str1, const void *str2, size_t size);
int			ft_strlen(const char *str);
int			ft_strncmp(char *s1, char *s2, unsigned int n);
int			ft_toupper(int ch);
int			ft_tolower(int ch);

void		*ft_memchr(const void *s, int ch, size_t nb);
void		ft_bzero(void *ptr, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		*ft_memset(void *ptr, int value, unsigned int num);
void		*ft_memcpy(void *dest, const void *src, size_t cnt);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr(char *s, int fd);
void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr_fd(char *s, int fd);
void		*ft_calloc(size_t cnt, size_t size);

char		*ft_strcpy(char *dest, char *src);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strchr(char const *str, int c);
char		*ft_strrchr(const char *str, int ch);
char		*ft_strnstr(const char *big, const char *little, size_t len);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_strjoin(char const *s1, char const *s2);

size_t		ft_strlcat(char *dest, const char *src, size_t len);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);

#endif

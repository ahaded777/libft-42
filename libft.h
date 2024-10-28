/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahaded <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:06:24 by aahaded           #+#    #+#             */
/*   Updated: 2024/10/26 21:50:06 by aahaded          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

int	    ft_isalpha(int c);
int	    ft_isdigit(int c);
int	    ft_isalnum(int c);
int	    ft_isascii(int c);
int	    ft_isprint(int c);
int     ft_toupper(int c);
int     ft_tolower(int c);
int     ft_strncmp(const char *str1, const char *str2, size_t n);
int     ft_len_num(int n);
int	ft_atoi(const char *str);
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
char    *ft_substr(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strrchr(const char *s, int c);
char    *ft_strchr(const char *s, int c);
char    *ft_strdup(const char *s);
char    **ft_split(char const *s, char c);
char	*ft_itoa(int n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_bzero(void *s, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void    ft_striteri(char *s, void (*f)(unsigned int, char*));
void    ft_putchar_fd(char c, int fd);
size_t	ft_strlen(const char *s);
size_t  ft_strlcpy(char *dest, const char *src, size_t size);
size_t  ft_strlcat(char *dest, const char *src, size_t size);

#endif

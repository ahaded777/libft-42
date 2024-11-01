/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahaded <aahaded@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:27:02 by aahaded           #+#    #+#             */
/*   Updated: 2024/11/01 10:46:48 by aahaded          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_cpy(char *dst, const char *src, int s, int size)
{
	int	i;

	i = 0;
	while (src[s + i] && i < size)
	{
		dst[i] = src[s + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_ca_u(void)
{
	char	*res2;

	res2 = malloc(1);
	if (res2 == NULL)
		return (NULL);
	res2[0] = '\0';
	return (res2);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		t_len;
	char	*res;
	int		s;
	int		s1_len;

	s = 0;
	s1_len = ft_strlen(s1);
	i = 0;
	if (!s1 || !set)
		return (NULL);
	if (s1[0] == '\0')
		return (ft_ca_u());
	while (s1[s] && ft_strchr(set, s1[s]))
		s++;
	while (s1_len > 0 && ft_strchr(set, s1[s1_len]))
		s1_len--;
	t_len = (s1_len - s) + 1;
	if (t_len < 0)
		t_len = 0;
	res = malloc(t_len + 1);
	if (res == NULL)
		return (NULL);
	ft_cpy(res, s1, s, t_len);
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahaded <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 20:41:57 by aahaded           #+#    #+#             */
/*   Updated: 2024/10/24 21:30:34 by aahaded          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	int	s_len;
	char	*res;

	i = 0;
	s_len = ft_strlen(s);
	if (!s || start >= s_len)
		return (NULL);
	res = malloc(s_len + 1);
	if (res == NULL)
		return (NULL);
	while (s[i] && i < len)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\n';
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahaded <aahaded@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:35:13 by aahaded           #+#    #+#             */
/*   Updated: 2024/11/01 11:10:33 by aahaded          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	**free_prev(char **res, int i)
{
	while (i--)
		free(res[i]);
	free(res);
	return (NULL);
}

int	count_word(const char *str, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (str[i] != c && (i == 0 || str[i - 1] == c))
			word++;
		i++;
	}
	return (word);
}

char	**ft_util(char **res, const char *s, char c, int c_word)
{
	int	i;
	int	j;
	int	e;
	int	len;

	i = 0;
	j = 0;
	while (i < c_word)
	{
		while (s[j] && s[j] == c)
			j++;
		e = j;
		while (s[j] && s[j] != c)
			j++;
		len = j - e;
		res[i] = malloc(len + 1);
		if (!res[i])
			return (free_prev(res, i));
		ft_memcpy(res[i], s + e, len);
		res[i][len] = '\0';
		i++;
	}
	res[i] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	int		c_word;
	char	**res;

	if (!s)
		return (NULL);
	c_word = count_word(s, c);
	res = malloc(sizeof(char *) * (c_word + 1));
	if (res == NULL)
		return (NULL);
	return (ft_util(res, s, c, c_word));
}

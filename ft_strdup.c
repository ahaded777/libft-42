/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahaded <aahaded@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:36:38 by aahaded           #+#    #+#             */
/*   Updated: 2024/10/30 10:10:39 by aahaded          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		str_len;
	char	*res;

	i = 0;
	str_len = ft_strlen(s);
	res = malloc(str_len + 1);
	if (res == NULL)
		return (NULL);
	ft_strlcpy(res, s, str_len + 1);
	return (res);
}

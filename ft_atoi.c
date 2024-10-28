/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahaded <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:29:49 by aahaded           #+#    #+#             */
/*   Updated: 2024/10/27 15:48:13 by aahaded          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	unsigned long long	r;

	i = 0;
	s = 1;
	r = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '-')
		s = s * -1;
	i++;
	while (ft_isdigit(str[i]))
	{
		r = (r * 10) + (str[i] - 48);
		if (r > "9223372036854775807")
		{
			if (s == -1)
				return (-1);
			return (-1);
		}
		i++;
	}
	return (s * r);
}


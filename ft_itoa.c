/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahaded <aahaded@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 12:02:54 by aahaded           #+#    #+#             */
/*   Updated: 2024/10/30 19:09:13 by aahaded          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_len_num(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	else
		i = 0;
	while (n)
	{
		n = (n / 10);
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len_num;
	long	nb;
	char	*res;

	nb = n;
	len_num = ft_len_num(nb);
	res = malloc(len_num + 1);
	if (!res)
		return (NULL);
	res[len_num] = '\0';
	if (nb == 0)
		res[0] = '0';
	if (nb < 0)
	{
		res[0] = '-';
		nb = -nb;
	}
	while (nb != 0)
	{
		res[len_num - 1] = (nb % 10) + 48;
		nb = nb / 10;
		len_num--;
	}
	return (res);
}

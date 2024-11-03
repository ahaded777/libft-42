/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahaded <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 19:22:31 by aahaded           #+#    #+#             */
/*   Updated: 2024/10/24 19:35:29 by aahaded          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	if (num > SIZE_MAX || size > SIZE_MAX)
        	return (NULL);
	if (size && num > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(num * size);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ft_bzero(ptr, size * num);
	return (ptr);
}

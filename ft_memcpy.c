/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahaded <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:16:43 by aahaded           #+#    #+#             */
/*   Updated: 2024/10/22 21:34:32 by aahaded          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;

    i = 0;
    if (!dest || !src)
        return (NULL);
    while (i < n)
    {
        ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        i++;
    }
    return (dest);
}

// int main()
// {
//     char src[3] = "12";
//     char dest[5];

//     ft_memcpy(dest, src, 6);

//     printf("Source: %s\n", src);       // Output: Source: 123456789
//     printf("Destination: %s\n", dest); // Output: Destination: 12345

//     return 0;
// }

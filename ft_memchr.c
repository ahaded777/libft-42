#include <stdio.h>
#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    if (!s || !c)
        return (NULL);
    while (i < n)
    {
        if (((unsigned char *)s)[i] == (unsigned char)c)
            return ((unsigned char *)s + i);
        i++;
    }
    return (NULL);
}
#include "libft.h"
#include <stdlib.h>
#include <string.h>

char change_case(unsigned int i, char c)
{
    if (i % 2 == 0)
        return (ft_tolower(c));
    else
        return (ft_toupper(c));
}

void make_uppercase(unsigned int i, char *c)
{
    if (i % 2 == 0)
        *c = ft_toupper(*c);
}

int main()
{
	char str[10] = "bbbbbbbb";
	ft_memset(str, 300, 3);
	char b[10];
	ft_bzero(b, 10);
	char dest[10];
	char src[] = "abdo ahaded";
	ft_memcpy(dest, src, 4);
	char destcpy[10];
       	char srcpy[15] = "abdo ahaded";	
	char destcat[10] = "hello";
	char srccat[5] = "world";
//	const char *strrwd = "Hello, world!";


	printf("ft_isalpha: %d\n", ft_isalpha(5));
	printf("ft_isdigit: %d\n", ft_isdigit(5));
	printf("ft_isalnum: %d\n", ft_isalnum('-'));
	printf("ft_isascii: %d\n", ft_isascii(10));
	printf("ft_isprint: %d\n", ft_isprint(32));
	printf("ft_strlen: %ld\n", ft_strlen("ahaded"));
	printf("ft_memset: %s\n", str);
	printf("ft_bzero: ");
	for(int i = 0;i < 10; i++)
	{
		printf("%d", b[i]);
	}
	printf("\n");
	printf("ft_memcpy: %s\n", dest);
	printf("ft_strlcpy: %ld\n", ft_strlcpy(destcpy, srcpy, 5));
	size_t r = ft_strlcat(destcat, srccat, 5);
	if (r >= 10)
		printf("truncation wq3at - macopinach kolchi\n");
	else
		printf("copied successfully\n");
	printf("ft_toupper: %c\n", ft_toupper('a'));
	printf("ft_tolower: %c\n", ft_tolower('A'));
	char *rr = ft_strchr("ahadde abdo", 'd');
       	char *rre = ft_strrchr("ahaded abdo", 'd');	
	int j = 0;
	printf("ft_strchr: ");
	if (rr != NULL)
	{
		while (rr[j])
		{
			printf("%c", rr[j]);
			j++;
		}
		printf("\n");
	}
	else
		printf("not found\n");
	int jd = 0;
	printf("ft_strrchr: ");
	if (rre != NULL)
        {
                while (rre[jd])
                {
                        printf("%c", rre[jd]);
                        jd++;
                }
                printf("\n");
        }
        else
                printf("not found\n");
	printf("ft_strncmp: %d\n", ft_strncmp("hello", "hello", 5));
	const char *haystack = "Hello, world!";
    	const char *needle1 = "world";
	printf("ft_strnstr: ");
       	char *result1 = ft_strnstr(haystack, needle1, 12);
    	printf("%s\n", result1 ? result1 : "NULL");
	printf("ori: %d\n", atoi("-5555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555"));
	printf("ft_atoi: %d\n", ft_atoi("-5555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555"));
	char *sree = ft_strdup("ahaded");
	int iwdf = 0;
	printf("ft_strdup: ");
	while (sree[iwdf])
	{
		printf("%c", sree[iwdf]);
		iwdf++;
	}
	char *resil = ft_substr("abdo ahaded", 5, 5);
	int dsdi = 0;
	printf("\nft_substr: ");
        while (resil[dsdi])
        {
                printf("%c", resil[dsdi]);
                dsdi++;
        }
	char *wggv = ft_strjoin("abdo ", "ahaded");
	int jdf = 0;
	printf("\nft_strjoin: ");
        while (wggv[jdf])
        {
                printf("%c", wggv[jdf]);
                jdf++;
        }
	char** ahaded = ft_split("hello,world,test", ',');
	int i = 0;
	printf("\nft_split: ");
	while (ahaded[i])
	{
		printf("%s ", ahaded[i]);
		i++;
	}
	printf("\nft_itoa: %s\n", ft_itoa(1337));
	char *resuldwdt = ft_strmapi("HELLO WORLD", &change_case);
	printf("ft_strmapi: %s\n", resuldwdt);
	char gkoj[] = "hello world"; 
	ft_striteri(gkoj, &make_uppercase);
        printf("ft_striteri: %s\n", gkoj);
	// printf("ft_putchar_fd: %c\n", ft_putchar_fd('a', 1));

}




#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int    count_word(const char *str, char c)
{
    int    i;
    int    word;

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

char    **ft_util(char **res, const char *s, char c, int c_word)
{
    int    i;
    int    j;
    int    e;
    int    len;

    i = -1;
    j = 0;
    while (++i < c_word)
    {
        while (s[j] && s[j] == c)
            j++;
        e = j;
        while (s[j] && s[j] != c)
            j++;
        len = j - e;
        res[i] = malloc(len + 1);
        if (!res[i])
            return (NULL);
        memcpy(res[i], s + e, len);
        res[i][len] = '\0';
    }
    res[i] = NULL;
    return (res);
}

char    **ft_split(char const *s, char c)
{
    int        c_word;
    char    **res;

    if (!s)
        return (NULL);
    c_word = count_word(s, c);
    res = malloc(sizeof(char *) * (c_word + 1));
    if (res == NULL)
        return (NULL);
    return (ft_util(res, s, c, c_word));
}

void    print_result(char **result)
{
    int    i;

    if (!result)
    {
        printf("NULL\n");
        return ;
    }
    i = 0;
    while (result[i])
    {
        printf("\"%s\" ", result[i]);
        i++;
    }
    printf("\n");
}

int    main(void)
{
    char    **result;

    result = ft_split("hello,world,again", ',');
    printf("Case 1: ");
    print_result(result);
    result = ft_split(",hello,world,", ',');
    printf("Case 2: ");
    print_result(result);
    result = ft_split("a,,,b,,,c", ',');
    printf("Case 3: ");
    print_result(result);
    result = ft_split("", ',');
    printf("Case 4: ");
    print_result(result);
    result = ft_split("abcdef", ',');
    printf("Case 5: ");
    print_result(result);
    return (0);
}
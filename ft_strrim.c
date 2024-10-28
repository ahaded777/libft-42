#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strlcpy(char *dst, const char *src, int s, int size)
{
    size_t i = 0;
    while (src[s + i] && i < size)
    {
        dst[i] = src[s + i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}

char *ft_strtrim(char const *s1, char const *set)
{
    int s;      // 3
    int s1_len; // 9
    int i;
    int t_len;
    char *res;

    s = 0;
    s1_len = ft_strlen(s1);
    i = 0;
    if (!s1 || !set)
        return (NULL);
    while (s1[s] && ft_strchr(set, s1[s]))
        s++;
    while (s1_len > 0 && ft_strchr(set, s1[s1_len]))
        s1_len--;
    t_len = (s1_len - s) + 1;
    if (t_len < 0)
        t_len = 0;
    res = malloc(t_len + 1);
    if (res == NULL)
        return (NULL);
    ft_strlcpy(res, s1, s, t_len);
    return (res);
}

int main()
{
    // Test case 1
    char s1_1[] = "../..//ahadedabdoillah../..//.";
    char set_1[] = "./";
    char *trimmed_1 = ft_strtrim(s1_1, set_1);
    printf("Test 1: %s\n", trimmed_1 ? trimmed_1 : "NULL");
    free(trimmed_1);

    // Test case 2
    char s1_2[] = "hello";
    char set_2[] = "./";
    char *trimmed_2 = ft_strtrim(s1_2, set_2);
    printf("Test 2: %s\n", trimmed_2 ? trimmed_2 : "NULL");
    free(trimmed_2);

    // Test case 3
    char s1_3[] = "...../////....";
    char set_3[] = "./";
    char *trimmed_3 = ft_strtrim(s1_3, set_3);
    printf("Test 3: %s\n", trimmed_3 ? trimmed_3 : "NULL");
    free(trimmed_3);

    // Test case 4
    char s1_4[] = "";
    char set_4[] = "./";
    char *trimmed_4 = ft_strtrim(s1_4, set_4);
    printf("Test 4: %s\n", trimmed_4 ? trimmed_4 : "NULL");
    free(trimmed_4);

    // Test case 5
    char s1_5[] = "xxxyyyzzhellozzzyyyxxx";
    char set_5[] = "xyz";
    char *trimmed_5 = ft_strtrim(s1_5, set_5);
    printf("Test 5: %s\n", trimmed_5 ? trimmed_5 : "NULL");
    free(trimmed_5);

    // Test case 6
    char s1_6[] = "   hello world   ";
    char set_6[] = " ";
    char *trimmed_6 = ft_strtrim(s1_6, set_6);
    printf("Test 6: %s\n", trimmed_6 ? trimmed_6 : "NULL");
    free(trimmed_6);

    // Test case 7
    char s1_7[] = ".....hello";
    char set_7[] = ".";
    char *trimmed_7 = ft_strtrim(s1_7, set_7);
    printf("Test 7: %s\n", trimmed_7 ? trimmed_7 : "NULL");
    free(trimmed_7);

    // Test case 8
    char s1_8[] = "hello.....";
    char set_8[] = ".";
    char *trimmed_8 = ft_strtrim(s1_8, set_8);
    printf("Test 8: %s\n", trimmed_8 ? trimmed_8 : "NULL");
    free(trimmed_8);

    return 0;
}
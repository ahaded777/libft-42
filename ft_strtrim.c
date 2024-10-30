/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aahaded <aahaded@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:27:02 by aahaded           #+#    #+#             */
/*   Updated: 2024/10/29 11:07:00 by aahaded          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_cpy(char *dst, const char *src, int s, int size)
{
	size_t	i;

	i = 0;
	while (src[s + i] && i < size)
	{
		dst[i] = src[s + i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		t_len;
	char	*res;
	int		s;
	int		s1_len;

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
	ft_cpy(res, s1, s, t_len);
	return (res);
}
// int	main(void)
// {
// 	char	s1_1[];
// 	char	set_1[];
// 	char	*trimmed_1;
// 	char	s1_2[];
// 	char	set_2[];
// 	char	*trimmed_2;
// 	char	s1_3[];
// 	char	set_3[];
// 	char	*trimmed_3;
// 	char	s1_4[];
// 	char	set_4[];
// 	char	*trimmed_4;
// 	char	s1_5[];
// 	char	set_5[];
// 	char	*trimmed_5;
// 	char	s1_6[];
// 	char	set_6[];
// 	char	*trimmed_6;
// 	char	s1_7[];
// 	char	set_7[];
// 	char	*trimmed_7;
// 	char	s1_8[];
// 	char	set_8[];
// 	char	*trimmed_8;

// 	// Test case 1
// 	s1_1[] = "../..//ahadedabdoillah../..//.";
// 	set_1[] = "./";
// 	trimmed_1 = ft_strtrim(s1_1, set_1);
// 	printf("Test 1: %s\n", trimmed_1 ? trimmed_1 : "NULL");
// 	free(trimmed_1);
// 	// Test case 2
// 	s1_2[] = "hello";
// 	set_2[] = "./";
// 	trimmed_2 = ft_strtrim(s1_2, set_2);
// 	printf("Test 2: %s\n", trimmed_2 ? trimmed_2 : "NULL");
// 	free(trimmed_2);
// 	// Test case 3
// 	s1_3[] = "...../////....";
// 	set_3[] = "./";
// 	trimmed_3 = ft_strtrim(s1_3, set_3);
// 	printf("Test 3: %s\n", trimmed_3 ? trimmed_3 : "NULL");
// 	free(trimmed_3);
// 	// Test case 4
// 	s1_4[] = "";
// 	set_4[] = "./";
// 	trimmed_4 = ft_strtrim(s1_4, set_4);
// 	printf("Test 4: %s\n", trimmed_4 ? trimmed_4 : "NULL");
// 	free(trimmed_4);
// 	// Test case 5
// 	s1_5[] = "xxxyyyzzhellozzzyyyxxx";
// 	set_5[] = "xyz";
// 	trimmed_5 = ft_strtrim(s1_5, set_5);
// 	printf("Test 5: %s\n", trimmed_5 ? trimmed_5 : "NULL");
// 	free(trimmed_5);
// 	// Test case 6
// 	s1_6[] = "   hello world   ";
// 	set_6[] = " ";
// 	trimmed_6 = ft_strtrim(s1_6, set_6);
// 	printf("Test 6: %s\n", trimmed_6 ? trimmed_6 : "NULL");
// 	free(trimmed_6);
// 	// Test case 7
// 	s1_7[] = ".....hello";
// 	set_7[] = ".";
// 	trimmed_7 = ft_strtrim(s1_7, set_7);
// 	printf("Test 7: %s\n", trimmed_7 ? trimmed_7 : "NULL");
// 	free(trimmed_7);
// 	// Test case 8
// 	s1_8[] = "hello.....";
// 	set_8[] = ".";
// 	trimmed_8 = ft_strtrim(s1_8, set_8);
// 	printf("Test 8: %s\n", trimmed_8 ? trimmed_8 : "NULL");
// 	free(trimmed_8);
// 	return (0);
//  }

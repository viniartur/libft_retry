/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <viniciusarturvieira@proton.me>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:21:31 by vvieira           #+#    #+#             */
/*   Updated: 2025/07/20 10:58:30 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

static int	ft_isset(char c, const char *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*ret;
	char	*start;
	char	*end;

	if (!s1 || !set)
		return (0);
	start = (char *)s1;
	end = start + ft_strlen(s1);
	while (*start && ft_isset(*start, set))
		++start;
	while (start < end && ft_isset(*(end - 1), set))
		--end;
	ret = ft_substr(start, 0, end - start);
	return (ret);
}
// #include <stdlib.h>
// #include <stdio.h>
// size_t  ft_strlen(const char *s)
// {
//     size_t  n;
//     n = 0;
//     while (s[n] != '\0')
//         n++;
//     return (n);
// }
// char    *ft_substr(char const *s, unsigned int start, size_t len)
// {
//     char            *sub;
//     size_t          s_len;
//     unsigned int    i;

//     s_len = ft_strlen(s);
//     if (start >= s_len)
//         return (malloc(1));
//     if (len > s_len - start)
//         len = s_len - start;
//     sub = (char *)malloc(sizeof(char) * (len + 1));
//     if (!sub)
//         return (NULL);
//     i = 0;
//     while (i < len)
//     {
//         sub[i] = s[start + i];
//         i++;
//     }
//     sub[i] = '\0';
//     return (sub);
// }
// int main(void)
// {
//     char *s1 = "   hello world   ";
//     char *set1 = " ";
//     char *s2 = "---teste---";
//     char *set2 = "-";
//     char *s3 = "abcba";
//     char *set3 = "ab";
//     char *s4 = "    ";
//     char *set4 = " ";
//     char *s5 = "123ola mundo321";
//     char *set5 = "123";

//     printf("'%s' com set '%s': '%s'\n", s1, set1, ft_strtrim(s1, set1));
//     printf("'%s' com set '%s': '%s'\n", s2, set2, ft_strtrim(s2, set2));
//     printf("'%s' com set '%s': '%s'\n", s3, set3, ft_strtrim(s3, set3));
//     printf("'%s' com set '%s': '%s'\n", s4, set4, ft_strtrim(s4, set4));
//     printf("'%s' com set '%s': '%s'\n", s5, set5, ft_strtrim(s5, set5));

//     free(ft_strtrim(s1, set1));
//     free(ft_strtrim(s2, set2));
//     free(ft_strtrim(s3, set3));
//     free(ft_strtrim(s4, set4));
//     free(ft_strtrim(s5, set5));
//     return (0);
// }
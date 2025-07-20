/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <viniciusarturvieira@proton.me>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:27:16 by vvieira           #+#    #+#             */
/*   Updated: 2025/07/20 11:08:59 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buffer;
	size_t	len_s;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start > len_s)
		return (ft_calloc(1, sizeof(char)));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	buffer = ft_calloc(len + 1, sizeof(char));
	if (!buffer)
		return (NULL);
	ft_memcpy(buffer, &s[start], len);
	buffer[len] = '\0';
	return (buffer);
}
// #include <stdlib.h>
// #include <stdio.h>
// void    *ft_memcpy(void *dest, const void *src, size_t n)
// {
//     char       *d;
//     const char *s;
//     if (!dest && !src)
//         return (NULL);
//     d = (char *)dest;
//     s = (const char *)src;
//     while (n--)
//         *d++ = *s++;
//     return (dest);
// }
// void    *ft_calloc(size_t nmemb, size_t size)
// {
//     void    *ptr;
//     size_t  total_size;

//     total_size = nmemb * size;
//     ptr = malloc(total_size);
//     if (!ptr)
//         return (NULL);
//     size_t i = 0;
//     char *char_ptr = (char *)ptr;
//     while (i < total_size)
//     {
//         char_ptr[i] = 0;
//         i++;
//     }
//     return (ptr);
// }
// size_t  ft_strlen(const char *s)
// {
//     size_t  n;
//     n = 0;
//     while (s[n] != '\0')
//         n++;
//     return (n);
// }
// int main(void)
// {
//     char *str = "42 Sao Paulo - Estudante de C";
//     char *sub1;
//     char *sub2;
//     char *sub3;
//     char *sub4;
//     sub1 = ft_substr(str, 3, 5);
//     sub2 = ft_substr(str, 0, 2);
//     sub3 = ft_substr(str, 20, 10);
//     sub4 = ft_substr(str, 50, 5);
//     printf("Original: '%s'\n", str);
//     printf("Substr (3, 5): '%s'\n", sub1);
//     printf("Substr (0, 2): '%s'\n", sub2);
//     printf("Substr (20, 10): '%s'\n", sub3);
//     printf("Substr (50, 5): '%s'\n", sub4);
//     free(sub1);
//     free(sub2);
//     free(sub3);
//     free(sub4);
//     return (0);
// }
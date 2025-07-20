/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <viniciusarturvieira@proton.me>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:32:14 by vvieira           #+#    #+#             */
/*   Updated: 2025/07/20 10:53:16 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	needle_s;
	unsigned int	count;

	needle_s = 0;
	if (*needle == 0)
		return ((char *)haystack);
	while (needle[needle_s])
		needle_s++;
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		count = 0;
		while (haystack[i + j] == needle[j] && j < needle_s && i + j < len)
		{
			j++;
			count++;
		}
		if (count == needle_s)
			return ((char *)&haystack[i]);
		i++;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char *haystack = "hello world";
//     char *needle1 = "world";
//     char *needle2 = "xyz";
//     char *needle3 = "hello";
//     char *needle4 = "";
//     char *needle5 = "o w";
//     printf("'%s' em '%s' (len 11): %s\n", needle1, haystack,
//         ft_strnstr(haystack, needle1, 11));
//     printf("'%s' em '%s' (len 11): %s\n", needle2, haystack,
//         ft_strnstr(haystack, needle2, 11));
//     printf("'%s' em '%s' (len 5): %s\n", needle3, haystack,
//         ft_strnstr(haystack, needle3, 5));
//     printf("'%s' em '%s' (len 11): %s\n", needle4, haystack,
//         ft_strnstr(haystack, needle4, 11));
//     printf("'%s' em '%s' (len 7): %s\n", needle5, haystack,
//         ft_strnstr(haystack, needle5, 7));
//     printf("'%s' em '%s' (len 6): %s\n", needle5, haystack,
//         ft_strnstr(haystack, needle5, 6));
//     return (0);
// }
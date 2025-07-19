/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:42:48 by vvieira           #+#    #+#             */
/*   Updated: 2025/07/19 19:16:41 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dst_s;
	size_t	src_s;

	dst_s = 0;
	src_s = 0;
	i = 0;
	while (src[src_s])
		src_s++;
	if (dstsize == 0)
		return (src_s);
	while (dst_s < dstsize && dst[dst_s])
		dst_s++;
	if (dstsize <= dst_s)
		return (dstsize + src_s);
	i = dst_s;
	j = 0;
	while (i < dstsize - 1 && src[j])
	{
		dst[i++] = src[j];
		j++;
	}
	dst[i] = '\0';
	return (src_s + dst_s);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	dst[20] = "Hello, ";
// 	const char	*src = "World!";
// 	size_t	result;

// 	result = ft_strlcat(dst, src, sizeof(dst));

// 	printf("Resultado do strlcat: %zu\n", result);
// 	printf("String concatenada: %s\n", dst);

// 	return (0);
// }

// Appends the NUL-terminated string src to the end of dst.
//  It will append at most size - strlen(dst) - 1 bytes, 
//  NUL-terminating the result.
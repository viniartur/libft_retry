/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <viniciusarturvieira@proton.me>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:46:01 by vvieira           #+#    #+#             */
/*   Updated: 2025/07/20 10:39:13 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (0);
	while (src[i])
		i++;
	if (dstsize == 0)
		return (i);
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	dst[10];
// 	const char	*src = "Exemplo de string";
// 	size_t	ret;

// 	ret = ft_strlcpy(dst, src, sizeof(dst));

// 	printf("Retorno: %zu\n", ret);
// 	printf("String copiada: %s\n", dst);

// 	return (0);
// }
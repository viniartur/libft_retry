/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <viniciusarturvieira@proton.me>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 23:08:33 by vvieira           #+#    #+#             */
/*   Updated: 2025/07/28 20:41:43 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*pdest;
	const unsigned char	*psrc;

	if (!dest && !src)
		return (NULL);
	pdest = (unsigned char *)dest;
	psrc = (const unsigned char *)src;
	while (n--)
		*pdest++ = *psrc++;
	return (dest);
}
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char    buffer_ft[20];
//     char    buffer_orig[20];
//     const char *source = "Hello, 42!";
//     size_t  len;

//     printf("--- Testando ft_memcpy ---\n\n");

//     // Teste 1: Copiar uma string completa
//     len = strlen(source) + 1; // Inclui o '\0'
//     printf("Teste 1: Copiando \"%s\" (%zu bytes)\n", source, len);
//     ft_memcpy(buffer_ft, source, len);
//     memcpy(buffer_orig, source, len);
//     printf("  ft_memcpy: \"%s\"\n", buffer_ft);
//     printf("  memcpy orig: \"%s\"\n", buffer_orig);
//     printf("  %s\n\n", (strcmp(buffer_ft,
//  buffer_orig) == 0 ? "-> OK" : "-> FALHOU"));
//     return (0);
// }
// void *ft_memcpy(void *dest, const void *src, size_t n)
// {
// 	size_t	i;
// 	if (!dest && !src)
// 		return (0);
// 	i = 0;
// 	while (i < n)
// 	{
// 		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
// 		i++;
// 	}
// 	return(dest);
// }
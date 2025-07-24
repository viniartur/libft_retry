/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <viniciusarturvieira@proton.me>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 20:08:33 by vvieira           #+#    #+#             */
/*   Updated: 2025/07/20 11:41:37 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*(ptr + i) == (unsigned char)c)
			return (ptr + i);
		i++;
	}
	return (NULL);
}
// void	*ft_memchr(const void *s, int c, size_t n)
// {
// 	size_t a;

// 	a = 0;
// 	while (a < n)
// 	{
// 		if (((unsigned char *)s)[a] == (unsigned char)c)
// 			return (((void *)&((unsigned char *)s)[a]));
// 		a += 1;
// 	}
// 	return (NULL);
// }
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     const char *test_str = "42 Sao Paulo";
//     char       *result;

//     printf("--- Teste de ft_memchr ---\n");
//     result = ft_memchr(test_str, 'S', strlen(test_str));
//     if (result)
//         printf("Encontrado 'S' em '%s' no endereco %p (valor: '%c')\n",
// 			 test_str, (void *)result, *result);
//     else
//         printf("Nao encontrou 'S' em '%s'\n", test_str);
//     result = ft_memchr(test_str, 'x', strlen(test_str));
//     if (result)
//         printf("Encontrado 'x' em '%s' no endereco %p (valor: '%c')\n",
// 			 test_str, (void *)result, *result);
//     else
//         printf("Nao encontrou 'x' em '%s'\n", test_str);
//     result = ft_memchr(test_str, '\0', strlen(test_str) + 1);
//     if (result)
//         printf("Encontrado '\\0' em '%s' no endereco %p\n", test_str,
// 			 (void *)result);
//     else
//         printf("Nao encontrou '\\0' em '%s'\n", test_str);
//     return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <viniciusarturvieira@proton.me>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 20:08:33 by vvieira           #+#    #+#             */
/*   Updated: 2025/07/28 20:44:03 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	while (n--)
	{
		if (*p1++ != *p2++)
			return (*(--p1) - *(--p2));
	}
	return (0);
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
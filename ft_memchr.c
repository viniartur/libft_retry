/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 20:07:37 by vvieira           #+#    #+#             */
/*   Updated: 2025/07/19 16:52:01 by vvieira          ###   ########.fr       */
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
//         printf("Encontrado '\\0' em '%s' no endereco %p\n",
// 			 test_str, (void *)result);
//     else
//         printf("Nao encontrou '\\0' em '%s'\n", test_str);
//     return (0);
// }
// The memchr() function scans the initial n bytes of the
// memory area pointed to by s for the first instance of c.
// Both c and the bytes of the memory area pointed to
// by s are interpreted as unsigned char.
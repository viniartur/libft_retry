/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <viniciusarturvieira@proton.me>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:25:08 by vvieira           #+#    #+#             */
/*   Updated: 2025/07/28 20:45:37 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest > src)
	{
		while (n--)
			((unsigned char *)dest)[n] = ((unsigned const char *)src)[n];
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
// void *ft_memmove(void *dst, const void *src, size_t n)
// {
//     unsigned char       *d;
//     const unsigned char *s;

//     if (n == 0)
//         return (dst);

//     d = (unsigned char *)dst;
//     s = (const unsigned char *)src;

//     if (d < s)
//     {
//         while (n--)
//         {
//             *d = *s;
//             d++;
//             s++;
//         }
//     }
//     else
//     {
//         d += (n - 1);
//         s += (n - 1);

//         while (n--)
//         {
//             *d = *s;
//             d--;
//             s--;
//         }
//     }
//     return (dst);
// }
// void	*ft_memcpy(void *dest, const void *src, size_t n)
// {
// 	size_t	i;
// 	char	*de;
// 	char	*sr;
// 	i = 0;
// 	de = (char *)dest;
// 	sr = (char *)src;
// 	if (!src && !dest)
// 		return (0);
// 	while (i < n)
// 	{
// 		de[i] = sr[i];
// 		i++;
// 	}
// 	return (de);
// }
// #include <stdio.h>
// int main()
// {
//     char buffer1[50];
//     char buffer2[50];
//     char buffer3[50];
//     char buffer4[50];
//     char *src_overlap;
//     char *dst_overlap;
//     int test_num = 1;

//     printf("--- Testes da ft_memmove ---\n\n");
//     printf("Teste %d: Copiando uma string simples\n", test_num++);
//     strcpy(buffer1, "Hello World!");
//     ft_memmove(buffer2, buffer1, strlen(buffer1) + 1);
//     printf("Original: \"%s\"\n", buffer1);
//     printf("Copiado com ft_memmove: \"%s\"\n", buffer2);
//     if (strcmp(buffer1, buffer2) == 0)
//         printf("Resultado: SUCESSO!\n\n");
//     else
//         printf("Resultado: FALHA!\n\n");

//     return 0;
// }
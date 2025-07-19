/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:25:08 by vvieira           #+#    #+#             */
/*   Updated: 2025/07/19 18:37:29 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*ptr_d;
	char	*ptr_s;
	int		i;

	ptr_d = (char *)dst;
	ptr_s = (char *)src;
	if (!src && !dst)
		return (0);
	if (src == dst)
		return (dst);
	if (dst > src)
	{
		i = n;
		while (i)
		{
			ptr_d[i - 1] = ptr_s[i - 1];
			i--;
		}
	}
	else
		ft_memcpy(dst, src, n);
	return (ptr_d);
}
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
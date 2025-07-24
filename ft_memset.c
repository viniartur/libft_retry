/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <viniciusarturvieira@proton.me>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:28:12 by vvieira           #+#    #+#             */
/*   Updated: 2025/07/20 11:30:45 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t	len)
{
	size_t				i;
	unsigned char		*ptr;

	i = 0;
	ptr = (unsigned char *)dest;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}
// void	*ft_memset(void *dst, int src, size_t len)
// {
// 	unsigned char *dst_cpy;

// 	dst_cpy = (unsigned char*)dst;
// 	while (len--)
// 		*dst_cpy++ = (unsigned char)src;
// 	return (dst);
// }
// #include <stdio.h>
// int main()
// {
//     char buffer1[20];
//     char buffer2[20];
//     int test_num = 1;

//     printf("--- Testes da ft_memset ---\n\n");
//     printf("Teste %d: Preencher com 'A' em um buffer de 10 bytes\n",
// 		 test_num++);
//     ft_memset(buffer1, 'A', 10);
//     buffer1[10] = '\0';
//     printf("ft_memset result: \"%s\"\n",
// 		 buffer1);
//     memset(buffer2, 'A', 10);
//     buffer2[10] = '\0';
//     printf("memset original result: \"%s\"\n",
// 		 buffer2);
//     if (strcmp(buffer1, buffer2) == 0)
//         printf("Resultado: SUCESSO!\n\n");
//     else
//         printf("Resultado: FALHA!\n\n");

// 		return(0);
// }
// The memset() function fills the first n bytes 
// of the memory area pointed to by s with the constant byte c
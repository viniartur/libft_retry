/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 23:08:33 by vvieira           #+#    #+#             */
/*   Updated: 2025/07/19 16:58:32 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*de;
	char	*sr;

	i = 0;
	de = (char *)dest;
	sr = (char *)src;
	if (!src && !dest)
		return (0);
	while (i < n)
	{
		de[i] = sr[i];
		i++;
	}
	return (de);
}
#include <stdio.h>
#include <string.h>
int main(void)
{
    char    buffer_ft[20];
    char    buffer_orig[20];
    const char *source = "Hello, 42!";
    size_t  len;

    printf("--- Testando ft_memcpy ---\n\n");

    // Teste 1: Copiar uma string completa
    len = strlen(source) + 1; // Inclui o '\0'
    printf("Teste 1: Copiando \"%s\" (%zu bytes)\n", source, len);
    ft_memcpy(buffer_ft, source, len);
    memcpy(buffer_orig, source, len);
    printf("  ft_memcpy: \"%s\"\n", buffer_ft);
    printf("  memcpy orig: \"%s\"\n", buffer_orig);
    printf("  %s\n\n", (strcmp(buffer_ft, buffer_orig) == 0 ? "-> OK" : "-> FALHOU"));

    // Teste 2: Copiar apenas parte de uma string
    len = 5; // Copiar "Hello"
    printf("Teste 2: Copiando \"%s\" (%zu bytes de \"Hello, 42!\")\n", "Hello", len);
    memset(buffer_ft, 0, 20); // Limpa buffers para novo teste
    memset(buffer_orig, 0, 20);
    ft_memcpy(buffer_ft, source, len);
    memcpy(buffer_orig, source, len);
    buffer_ft[len] = '\0'; // Adiciona terminador nulo para impressão
    buffer_orig[len] = '\0';
    printf("  ft_memcpy: \"%s\"\n", buffer_ft);
    printf("  memcpy orig: \"%s\"\n", buffer_orig);
    printf("  %s\n\n", (strcmp(buffer_ft, buffer_orig) == 0 ? "-> OK" : "-> FALHOU"));

    // Teste 3: Copiar 0 bytes
    len = 0;
    printf("Teste 3: Copiando 0 bytes\n");
    memset(buffer_ft, 'X', 20); // Preenche com 'X' para ver se muda
    memset(buffer_orig, 'X', 20);
    ft_memcpy(buffer_ft, source, len);
    memcpy(buffer_orig, source, len);
    printf("  ft_memcpy: (primeiro char) %c\n", buffer_ft[0]);
    printf("  memcpy orig: (primeiro char) %c\n", buffer_orig[0]);
    printf("  %s\n\n", (buffer_ft[0] == buffer_orig[0] ? "-> OK" : "-> FALHOU"));

    // Teste 4: Usando um array de ints (memória bruta)
    int arr_src[] = {10, 20, 30, 40, 50};
    int arr_dest_ft[5];
    int arr_dest_orig[5];
    len = sizeof(arr_src); // Copiar todos os bytes do array
    printf("Teste 4: Copiando array de inteiros (%zu bytes)\n", len);
    ft_memcpy(arr_dest_ft, arr_src, len);
    memcpy(arr_dest_orig, arr_src, len);
    printf("  ft_memcpy: arr_dest_ft[0]=%d, arr_dest_ft[4]=%d\n", arr_dest_ft[0], arr_dest_ft[4]);
    printf("  memcpy orig: arr_dest_orig[0]=%d, arr_dest_orig[4]=%d\n", arr_dest_orig[0], arr_dest_orig[4]);
    printf("  %s\n\n", (memcmp(arr_dest_ft, arr_dest_orig, len) == 0 ? "-> OK" : "-> FALHOU"));

    return (0);
}
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
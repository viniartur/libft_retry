/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 20:09:37 by vvieira           #+#    #+#             */
/*   Updated: 2025/07/19 13:13:41 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

// void	*ft_calloc(size_t count, size_t size)   
// { 
// 	void	*p;

// 	if (count >= 65535 && size >= 65535)
// 		return (0);  
// 	p = malloc (count * size); 
// 	if (!p) 
// 		return (0); 
// 	ft_bzero(p, (count * size));
// 	return (p);
// }
void	*ft_calloc(size_t number, size_t size)
{
	void	*array;

	array = (void *)malloc(size * number);
	if (!array)
		return (NULL);
	ft_bzero(array, size * number);
	return ((void *)array);
}
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     int     *int_arr;
//     char    *char_str;
//     size_t  i;
//     printf("--- Testes com ft_calloc ---\n");
//     // Teste 1: Array de inteiros
//     int_arr = (int *)ft_calloc(5, sizeof(int));
//     if (!int_arr) return 1;
//     printf("Array de int (5 elem, ft_calloc):\n");
//     for (i = 0; i < 5; i++)
//         printf("%d ", int_arr[i]);
//     printf("\n");
//     free(int_arr);

//     // Teste 2: String
//     char_str = (char *)ft_calloc(10, sizeof(char));
//     if (!char_str) return 1;

//     printf("String alocada (10 chars, ft_calloc): ");
//     printf("\"%s\" (length: %lu)\n", char_str, strlen(char_str));
//     printf("Bytes da string: ");
//     for (i = 0; i < 10; i++)
//         printf("%d ", (unsigned char)char_str[i]);
//     printf("\n");
//     free(char_str);

//     // Teste 3: Alocar com 0 elementos
//     char_str = (char *)ft_calloc(0, 10);
//     printf("Aloc com 0 elem: %p\n", (void *)char_str);
//     if (char_str) free(char_str);

//     // Teste 4: Alocar com 0 tamanho
//     char_str = (char *)ft_calloc(10, 0);
//     printf("Aloc com 0 tam: %p\n", (void *)char_str);
//     if (char_str) free(char_str);

//     printf("---\n");

//     return 0;
// }
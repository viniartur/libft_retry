/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 13:56:39 by vvieira           #+#    #+#             */
/*   Updated: 2025/07/19 11:43:53 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char				*str;
	unsigned int		i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

// void	ft_bzero(void *s, size_t n)
// {
// 	unsigned int i;

// 	i = 0;
// 	while (i < n)
// 		((char *)s)[i] = 0;
// }
// *DESCRIPTION*
// The bzero() function shall place n zero-valued
//  bytes in the area pointed to by s.
// *RETURN VALUE*
// The bzero() function shall not return a value.
// #include <stdio.h>
// int main()
// {
//     char    arr2[5] = "hello";    
//     char    *ptr;

//     printf("--- Testes com ft_bzero ---\n");

//     // Teste: Zerar todo um array
//     printf("Antes (arr2): %s\n", arr2);
//     ft_bzero(arr2, 5); // Zera 'hello'
//     printf("Depois (arr2): ");
//     for (int i = 0; i < 5; i++)
//         printf("%d ", arr2[i]);
//     printf("\n");
//     printf("---\n");

//     return 0;
// }

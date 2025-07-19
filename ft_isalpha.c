/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 23:20:58 by vvieira           #+#    #+#             */
/*   Updated: 2025/07/19 13:31:00 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
// #include <stdio.h>
// int main(void)
// {
//     printf("--- Testando ft_isalpha ---\n");

//     // Teste com letras maiúsculas
//     printf("'A': %d\n", ft_isalpha('A'));
//     printf("'Z': %d\n", ft_isalpha('Z'));

//     // Teste com letras minúsculas
//     printf("'a': %d\n", ft_isalpha('a'));
//     printf("'z': %d\n", ft_isalpha('z'));

//     // Teste com não-letras
//     printf("'5': %d\n", ft_isalpha('5'));
//     printf("'$': %d\n", ft_isalpha('$'));
//     printf("' ': %d\n", ft_isalpha(' '));

//     return (0);
// }
//  ft_isalpha  | Verifica se o caractere é alfabético.
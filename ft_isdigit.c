/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 22:56:39 by vvieira           #+#    #+#             */
/*   Updated: 2025/07/19 13:38:44 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
// #include <stdio.h>
// int main(void)
// {
//     printf("--- Testando ft_isdigit ---\n");
//     printf("'A': %d\n", ft_isdigit('A'));
//     printf("'9': %d\n", ft_isdigit('9'));
//     printf("'a': %d\n", ft_isdigit('a'));
//     printf("'z': %d\n", ft_isdigit('z'));
//     printf("'5': %d\n", ft_isdigit('5'));
//     printf("'$': %d\n", ft_isdigit('$'));
//     printf("' ': %d\n", ft_isdigit(' '));

//     return (0);
// }
// ft_isdigit | Verifica se o caractere é um dígito (0–9)
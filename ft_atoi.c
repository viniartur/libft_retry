/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 14:52:43 by vvieira           #+#    #+#             */
/*   Updated: 2025/07/19 11:25:41 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	num;
	int	sign;
	int	i;

	num = 0;
	sign = 1;
	i = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if (nptr[i] == '-')
		sign = sign * (-1);
	if (nptr[i] == '+' || nptr[i] == '-')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = (num * 10) + (nptr[i] - '0');
		i++;
	}
	return (num * sign);
}
// DESCRIPTION (man atoi)
// The atoi() function converts the initial portion of the
// string pointed to by nptr to int.  The behavior is the same as
// #include <stdio.h>
// int main()
// {
//     // Casos de teste
//     printf("Teste \"123\": %d\n", ft_atoi("123"));
//     printf("Teste \"-456\": %d\n", ft_atoi("-456"));
//     printf("Teste \"  +789\": %d\n", ft_atoi("  +789"));
//     printf("Teste \"  -123abc\": %d\n", ft_atoi("  -123abc"));
//     printf("Teste \"0\": %d\n", ft_atoi("0"));
//     printf("Teste \"    \\t\\n\\r\\v\\f  -999\": %d\n",
//  ft_atoi("    \t\n\r\v\f  -999"));
//     printf("Teste \"-2147483648\": %d\n",
//  ft_atoi("-2147483648"));
//     printf("Teste \"2147483647\": %d\n",
//  ft_atoi("2147483647"));   
//     printf("Teste \"\": %d\n", ft_atoi(""));
//     printf("Teste \"abc\": %d\n", ft_atoi("abc"));

//     // Opcional: Comparar com a função atoi da biblioteca padrão
//     printf("---\n");
//     printf("Comparacao com atoi da stdlib:\n");
//     printf("Teste \"123\": %d (ft_atoi) vs %d (atoi)\n",
//  ft_atoi("123"), atoi("123"));

// 	return (0);
// }

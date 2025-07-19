/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:22:24 by vvieira           #+#    #+#             */
/*   Updated: 2025/07/19 16:27:44 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	findsize(int n)
{
	int	size;

	size = 0;
	if (n < 0)
		size++;
	while (n && ++size)
		n = n / 10;
	return (size);
}

char	*ft_itoa(int n)
{
	int			size;
	char		*str;
	const char	*digits = "0123456789";

	size = 1;
	if (n != 0)
		size = findsize(n);
	str = (char *)malloc(sizeof(char) * (size + 1));
	if (!str)
		return (0);
	str[size] = 0;
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[0] = '-';
	while (n)
	{
		if (n > 0)
			str[--size] = digits[n % 10];
		else
			str[--size] = digits[n % 10 * -1];
		n /= 10;
	}
	return (str);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <limits.h>
// int main(void)
// {
//     char *result;
//     printf("--- Testando ft_itoa ---\n");
//     // Teste 1: Número positivo
//     result = ft_itoa(12345);
//     printf("ft_itoa(12345)   = \"%s\"\n", result); 
//     free(result); 
//     // Teste 2: Número negativo
//     result = ft_itoa(-6789);
//     printf("ft_itoa(-6789)   = \"%s\"\n", result);
//     free(result);
//     // Teste 3: Zero
//     result = ft_itoa(0);
//     printf("ft_itoa(0)       = \"%s\"\n", result);
//     free(result);
//     // Teste 4: Número de um dígito
//     result = ft_itoa(7);
//     printf("ft_itoa(7)       = \"%s\"\n", result);
//     free(result);
//     // Teste 5: INT_MAX (maior inteiro positivo)
//     result = ft_itoa(2147483647);
//     printf("ft_itoa(2147483647) = \"%s\"\n", result);
//     free(result);
//     // Teste 6: INT_MIN (menor inteiro negativo - caso crítico)
//     result = ft_itoa(-2147483648);
//     printf("ft_itoa(-2147483648) = \"%s\"\n", result);
//     free(result);
//     result = ft_itoa(100);
//     printf("ft_itoa(100)     = \"%s\"\n", result);
//     free(result);
//     result = ft_itoa(10203);
//     printf("ft_itoa(10203)   = \"%s\"\n", result);
//     free(result);
//     return (0);
// }
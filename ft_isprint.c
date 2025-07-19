/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 23:04:26 by vvieira           #+#    #+#             */
/*   Updated: 2025/07/19 13:42:47 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
// #include <stdio.h>
// int main(void)
// {
//     printf("--- Testando ft_isprint ---\n");
//     printf("'A': %d\n", ft_isprint('A'));
//     printf("'9': %d\n", ft_isprint('9'));
//     printf("'a': %d\n", ft_isprint('a'));
//     printf("'z': %d\n", ft_isprint('z'));
//     printf("'5': %d\n", ft_isprint('5'));
//     printf("'$': %d\n", ft_isprint('$'));
//     printf("' ': %d\n", ft_isprint(' '));

//     printf("' ': %d\n", ft_isprint(20));
//     printf("' ': %d\n", ft_isprint(21));
//     printf("' ': %d\n", ft_isprint(22));
//     printf("' ': %d\n", ft_isprint(23));
//     printf("' ': %d\n", ft_isprint(24));
//     return (0);
// }
// ft_isprint  | Verifica se o caractere é imprimível (incluindo espaço).
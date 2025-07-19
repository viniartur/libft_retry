/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:39:31 by vvieira           #+#    #+#             */
/*   Updated: 2025/07/19 13:34:14 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
// #include <stdio.h>
// int main(void)
// {
//     printf("--- Testando ft_isascii ---\n");
//     printf("'A': %d\n", ft_isascii('A'));
//     printf("'Z': %d\n", ft_isascii('Z'));
//     printf("'a': %d\n", ft_isascii('a'));
//     printf("'z': %d\n", ft_isascii('z'));
//     printf("'5': %d\n", ft_isascii('5'));
//     printf("'$': %d\n", ft_isascii('$'));
//     printf("' ': %d\n", ft_isascii(' '));

//     return (0);
// }
// isascii() checks whether c is a 7-bit 
// unsigned char value that fits into the ASCII character set.
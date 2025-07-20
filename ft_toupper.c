/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <viniciusarturvieira@proton.me>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:34:59 by vvieira           #+#    #+#             */
/*   Updated: 2025/07/20 11:12:39 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
// #include <stdio.h>
// #include <ctype.h>
// int main(void)
// {
//     printf("%c -> %c\n", 'a', ft_toupper('a'));
//     printf("%c -> %c\n", 'z', ft_toupper('z'));
//     printf("%c -> %c\n", 'A', ft_toupper('A'));
//     printf("%c -> %c\n", 'Z', ft_toupper('Z'));
//     printf("%c -> %c\n", '5', ft_toupper('5'));
//     printf("%c -> %c\n", '@', ft_toupper('@'));
//     return (0);
// }
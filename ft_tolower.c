/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <viniciusarturvieira@proton.me>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:34:55 by vvieira           #+#    #+#             */
/*   Updated: 2025/07/20 11:10:25 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}
// #include <stdio.h>
// #include <ctype.h> 
// int main(void)
// {
//     printf("%c -> %c\n", 'A', ft_tolower('A'));
//     printf("%c -> %c\n", 'Z', ft_tolower('Z'));
//     printf("%c -> %c\n", 'a', ft_tolower('a'));
//     printf("%c -> %c\n", 'z', ft_tolower('z'));
//     printf("%c -> %c\n", '5', ft_tolower('5'));
//     printf("%c -> %c\n", '@', ft_tolower('@'));
//     return (0);
// }
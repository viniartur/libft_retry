/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:56:31 by vvieira           #+#    #+#             */
/*   Updated: 2025/07/19 13:27:23 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// int	ft_isalpha(int c);
// int	ft_isdigit(int c);

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// int	ft_isalpha(int c)
// {
// 	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
// 		return (1);
// 	return (0);
// }

// int	ft_isdigit(int c)
// {
// 	if (c >= 48 && c <= 57)
// 		return (1);
// 	return (0);
// }

// #include <stdio.h>
// #include <ctype.h> 
// int main(void)
// {
//     int c;

//     printf("--- Testando ft_isalnum ---\n");
//     c = '$';
//     printf("'%c': ft_isalnum = %d (esperado: %d)\n",
//  c, ft_isalnum(c), isalnum(c));
//     c = ' ';
//     printf("'%c': ft_isalnum = %d (esperado: %d)\n",
//  c, ft_isalnum(c), isalnum(c));
//     c = '@';
//     printf("'%c': ft_isalnum = %d (esperado: %d)\n",
//  c, ft_isalnum(c), isalnum(c));
//     c = 127;
//     printf("DEL (127): ft_isalnum = %d (esperado: %d)\n",
//  ft_isalnum(c), isalnum(c));
//     c = 0;
//     printf("NULL (0): ft_isalnum = %d (esperado: %d)\n",
//  ft_isalnum(c), isalnum(c));
//     return (0);
// }
// isalnum()
// checks for an alphanumeric character
// it is equivalent to (isalpha(c) || isdigit(c)).
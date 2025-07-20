/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <viniciusarturvieira@proton.me>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 13:34:04 by vvieira           #+#    #+#             */
/*   Updated: 2025/07/20 10:41:12 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	n;

	n = 0;
	while (s[n] != '\0')
		n++;
	return (n);
}
// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
//     char *str1 = "Ola Mundo!";
//     char *str2 = "";
//     char *str3 = "42 Sao Paulo";

//     printf("'%s': %zu\n", str1, ft_strlen(str1));
//     printf("'%s': %zu\n", str2, ft_strlen(str2));
//     printf("'%s': %zu\n", str3, ft_strlen(str3));
//     return (0);
// } 
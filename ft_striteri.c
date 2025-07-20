/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <viniciusarturvieira@proton.me>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:23:51 by vvieira           #+#    #+#             */
/*   Updated: 2025/07/20 10:51:26 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	a;

	a = 0;
	if (s && f)
	{
		while (s[a])
		{
			(*f)(a, &s[a]);
			a++;
		}
	}
}
// #include <stdio.h>
// void	print_char_index(unsigned int i, char *c)
// {
// 	printf("Posição %u: %c\n", i, *c);
// }
// int	main(void)
// {
// 	char	str[] = "abcd";
// 	ft_striteri(str, print_char_index);
// 	return (0);
// }
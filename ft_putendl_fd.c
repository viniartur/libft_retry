/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:26:01 by vvieira           #+#    #+#             */
/*   Updated: 2025/07/19 18:47:57 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
// size_t	ft_strlen(const char *s)
// {
// 	size_t	n;

// 	n = 0;
// 	while (s[n] != '\0')
// 		n++;
// 	return (n);
// }
// #include <stdio.h>
// int main()
// {
//     int test_num = 1;
//     int fd_file;
//     char *test_string;
//     test_string = "Esta é uma linha de teste para stdout.";
//     ft_putendl_fd(test_string, STDOUT_FILENO);
//     return 0;
// }

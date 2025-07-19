/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vvieira <vvieira@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 19:25:03 by vvieira           #+#    #+#             */
/*   Updated: 2025/07/19 18:57:31 by vvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}
// size_t  ft_strlen(const char *s)
// {
//     size_t  len;
//     len = 0;
//     while (s[len] != '\0')
//         len++;
//     return (len);
// }
// #include <stdio.h>
// int main()
// {
//     int test_num = 1;
//     int fd_file;
//     char *test_string;
//     test_string = "Esta é uma linha de teste para stdout.";
//     ft_putstr_fd(test_string, STDOUT_FILENO);
// 	return (0);
// }
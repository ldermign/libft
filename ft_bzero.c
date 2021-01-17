/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 23:05:28 by ldermign          #+#    #+#             */
/*   Updated: 2021/01/12 08:43:26 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t	i;
	char	*s;
	size_t	n_bytes;

	i = 0;
	s = str;
	n_bytes = n;
	while (n_bytes > 0)
	{
		s[i] = '\0';
		i++;
		n_bytes--;
	}
}
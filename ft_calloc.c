/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 23:04:24 by ldermign          #+#    #+#             */
/*   Updated: 2021/01/05 08:14:24 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	unsigned int	len;
	unsigned char	*str;

	i = 0;
	len = nmemb * size;
	if ((str = malloc(len)) == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}

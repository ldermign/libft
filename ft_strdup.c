/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 21:00:58 by ldermign          #+#    #+#             */
/*   Updated: 2021/01/12 08:48:06 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s1)
{
	int		i;
	int		len;
	char	*dst;

	i = 0;
	len = 0;
	while (s1[len])
		len++;
	if ((dst = (char*)malloc(sizeof(*dst) * (len + 1))) == NULL)
		return (NULL);
	while (i < len)
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
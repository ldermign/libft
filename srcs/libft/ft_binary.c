/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_binary.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldermign <ldermign@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 15:37:19 by ldermign          #+#    #+#             */
/*   Updated: 2021/08/07 15:50:33 by ldermign         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	max_val_bits_len(int nbr)
{
	int	size;

	size = 1;
	while (nbr > 0)
	{
		nbr /= 2;
		size++;
	}
	return (size);
}

int	ft_binary(int nbr_to_convert)
{
	int		i;
	int		nbr;
	char	*char_nbr;

	i = max_val_bits_len(nbr_to_convert) - 1;
	char_nbr = malloc(sizeof(char) * (max_val_bits_len(nbr_to_convert) + 1));
	if (char_nbr == NULL)
		return (0);
	char_nbr[i--] = '\0';
	while (nbr_to_convert > 0)
	{
		char_nbr[i] = nbr_to_convert % 2 + 48;
		nbr_to_convert /= 2;
		i--;
	}
	nbr = ft_atoi(char_nbr);
	return (nbr);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_bits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njaber <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 02:08:19 by njaber            #+#    #+#             */
/*   Updated: 2017/11/30 02:16:25 by njaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_bits(const t_byte *addr, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len * 8)
	{
		ft_putchar('0' + ((*(addr + i / 8) & (0x80 >> i)) != 0));
		i++;
	}
}

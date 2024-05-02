/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_conver.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 18:59:18 by marvin            #+#    #+#             */
/*   Updated: 2024/04/30 18:59:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_p_conver(size_t ptr, int *count)
{
	char	str[20];
	char	*base_format;
	int		i;

	base_format = "0123456789abcdef";
	i = 0;
	if (ptr == 0)
	{
		write(1, "(nil)", 5);
		(*count) += 5;
	}
	else
	{
		write(1, "0x", 2);
		(*count) += 2;
		while (ptr != 0)
		{
			str[i] = base_format[ptr % 16];
			ptr = ptr / 16;
			i++;
		}
		while (i--)
			ft_c_conver(str[i], count);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_conver.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:33:16 by marvin            #+#    #+#             */
/*   Updated: 2024/04/30 19:33:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_xX_conver(unsigned int x, char type, int *count)
{
	char	str[20];
	char	*base_format;
	int		i;

	if (type == 'x')
		base_format = "0123456789abcdef";
	else
		base_format = "0123456789ABCDEF";
	i = 0;
	if (x == 0)
		ft_c_conver('0', count);
	while (x != '\0')
	{
		str[i] = base_format[x % 16];
		x = x / 16;
		i++;
	}
	while (i--)
		ft_c_conver(str[i], count);
}

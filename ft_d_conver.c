/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_conver.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-agui <mde-agui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 15:15:33 by mde-agui          #+#    #+#             */
/*   Updated: 2024/05/02 15:54:30 by mde-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_d_conver(int n, int *count)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*count) += 11;
		return ;
	}
	else if (n < 0)
	{
		ft_c_conver('-', count);
		ft_d_conver(n * -1, count);
	}
	else if (n >= 10)
	{
		ft_d_conver(n / 10, count);
		ft_c_conver(n % 10 + 48, count);
	}
	else
		ft_c_conver(n + 48, count);
}
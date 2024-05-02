/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftprintf.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:33:32 by marvin            #+#    #+#             */
/*   Updated: 2024/04/30 17:33:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
//# include <stdio.h>
# include <unistd.h>
//# include <string.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
void	ft_c_conver(char c, int *count);
void	ft_d_conver(int n, int *count);
void	ft_s_conver(const char *str, int *count);
void	ft_p_conver(size_t ptr, int *count);
void	ft_u_conver(unsigned int n, int *count);
void	ft_xX_conver(unsigned int x, char type, int *count);

#endif

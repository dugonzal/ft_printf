/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:10:57 by ciclo             #+#    #+#             */
/*   Updated: 2022/07/26 17:52:28 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINFT_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include "libft/libft.h"
# include <stdarg.h>

int		ft_printf(char const *format, ...);
int		ft_formats(va_list, const char format);
char	ft_putchar(char c);
int		ft_str_printf(char *str);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:13:20 by ciclo             #+#    #+#             */
/*   Updated: 2023/03/30 17:32:38 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_printf(char const *str, ...)
{
	size_t		i;
	size_t		length;
	va_list		arg;

	i = 0;
	length = 0;
	va_start(arg, str);
	while (str[i] != 0)
	{
		if (str[i] == '%' && str[i + 1] != 0)
		{
			length += ft_formats(arg, str[i + 1]);
			i++;
		}
		else
		{
			if (str[i] == '%' && !str[i + 1])
				return (-1);
			length += ft_putchar(str[i]);
		}
		i++;
	}
	va_end(arg);
	return ((int)length);
}

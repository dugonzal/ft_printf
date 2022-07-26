/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:52:16 by ciclo             #+#    #+#             */
/*   Updated: 2022/07/26 18:17:36 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(va_list args, const char format)
{
	int	length;

	length = 0;
	if (format == '%')
	{
		length = ft_putchar('%');
	}
	else if (format == 'c')
	{
		length = ft_putchar(va_arg(args, int));
	}
	else if (format == 's')
	{
		length = ft_str_printf(va_arg(args, char *));
	}
	else if (format == 'd' || format == 'i')
	{
	}
	else if (format == 'u')
	{
	}
	else if (format == 'x')
	{
	}
	else if (format == 'X')
	{
	}
	else
		printf ("progress");
	return (length);
}

char	ft_putchar(char c)
{
	write (1, &c, 1);
	return (1);
}

int	ft_str_printf(char *str)
{
	int	i;

	if (!str)
		return (-1);
	i = 0;
	while (str[i] != 0)
		write (1, &str[i++], 1);
	return (i);
}

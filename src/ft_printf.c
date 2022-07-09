/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:13:20 by ciclo             #+#    #+#             */
/*   Updated: 2022/07/09 15:55:29 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"

int	ft_printf(char const *format, ...)
{
	va_list		list;	char const	*format;

	va_start(list, format);
	while (*format != 0)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
				ft_putchar('%');
			else
				ft_printf_parse(format, &i, list);
		}
		else
			ft_putchar(*format);
		format++;
	}
	va_end(list);
	return (0);
}

int	main(void)
{
	return (0);
}

/*
 conversiones a implementar : cspdiuxX %.
*/

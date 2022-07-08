/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/09 11:31:15 by dugonzal          #+#    #+#             */
/*   Updated: 2022/07/08 16:53:21 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/printf.h"

/*
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
*/
int	main(void)
{
	ft_printf("%s", "hello");
	return (0);
}

/*
 conversiones a implementar : cspdiuxX %.
*/

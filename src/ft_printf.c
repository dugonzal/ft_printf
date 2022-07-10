/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:13:20 by ciclo             #+#    #+#             */
/*   Updated: 2022/07/10 14:23:47 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putchar_fd(char c)
{
	write(1, &c, 1);
}

int	ft_printf(char const *format, ...)
{
	va_list	arg; // declaramos la lista de flags
	if (!format)
		return (-1);
	va_start(arg, format); // inicializamos la lista de flags
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '%')
				ft_putchar_fd('%');
			else if (*format == 'c')
			{
				ft_putchar_fd(va_arg(arg, int));
			}
				*format++;
		}
	}
	va_end(arg); // liberamos la lista de flags
	return (0);
}

int	main(void)
{
	ft_printf("%c", 'c');
	return (0);
}

/*
 conversiones a implementar : c,s,p,d,i,u,x,X,%.
 funciones autorizadas malloc, free, write, va_start, va_arg, va_copy, va_end
*/

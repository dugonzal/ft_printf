/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:13:20 by ciclo             #+#    #+#             */
/*   Updated: 2022/07/23 18:54:16 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *format, ...)
{
	int		i;
	va_list	arg; // declaramos la lista de flags
	if (!format)
		return (-1);
	i = 0;
	va_start(arg, format); // inicializamos la lista de flags
	while (format[i] != 0)
	{
		while (format[i] != '%' && format[i] != 0) // escribimos todo lo que encuentre antes del porcentaje
		{
			write (1, &format[i], 1);
			i++;
		}
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
				ft_putchar('%');
			else if (format[i] == 'c')
			{
				ft_putstr_fd(va_arg(arg, char *), 1);
			}
			else
			{
				/* code */
			}
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	ft_printf("main:\n{%c}", 'h');
	//printf("main:\n");
	return (0);
}

/*
 conversiones a implementar : c,s,p,d,i,u,x,X,%.
 funciones autorizadas malloc, free, write, va_start, va_arg, va_copy, va_end
*/

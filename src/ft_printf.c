/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:13:20 by ciclo             #+#    #+#             */
/*   Updated: 2022/07/10 17:34:59 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

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
			{
				ft_putchar('%');
			}
			else if (format[i] == 'c')
			{
				ft_putchar(va_arg(arg, int));
			}
			i++;
		}
	}
	va_end(arg); // liberamos la lista de flags
	return (0);
}

int	main(void)
{
	ft_printf("main:\n");
	//printf("main:\n");
	return (0);
}

/*
 conversiones a implementar : c,s,p,d,i,u,x,X,%.
 funciones autorizadas malloc, free, write, va_start, va_arg, va_copy, va_end
*/

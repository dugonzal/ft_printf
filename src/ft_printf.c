/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ciclo <ciclo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 15:13:20 by ciclo             #+#    #+#             */
/*   Updated: 2022/07/26 18:11:58 by ciclo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	int		i;
	va_list	arg; // declaramos la lista de flags
	if (!str)
		return (-1);
	i = 0;
	va_start(arg, str); // inicializamos la lista de flags
	while (str[i] != 0)
	{
		if (str[i] == '%')
		{
			ft_formats(arg, str[i + 1]);
			i++;
		}
		else
			ft_putchar(str[i]);
		i++;
	}
	va_end(arg); // liberamos la lista de flags
	return (0);
}

/*
 conversiones a implementar : c,s,p,d,i,u,x,X,%.
 funciones autorizadas malloc, free, write, va_start, va_arg, va_copy, va_end
*/

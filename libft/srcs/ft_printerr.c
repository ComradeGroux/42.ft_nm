/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printerr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgroux <vgroux@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:55:55 by vgroux            #+#    #+#             */
/*   Updated: 2025/05/14 13:29:08 by vgroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printerr_conv(char format, va_list ap)
{
	if (format == '%')
		return (ft_printerr_char('%'));
	else if (format == 'c')
		return (ft_printerr_char(va_arg(ap, int)));
	else if (format == 's')
		return (ft_printerr_str(va_arg(ap, char *)));
	else if (format == 'i' || format == 'd')
		return (ft_printerr_n_base(va_arg(ap, int), "0123456789"));
	else if (format == 'x')
		return (ft_printerr_n_base(va_arg(ap, unsigned int), "0123456789abcdef"));
	else if (format == 'X')
		return (ft_printerr_n_base(va_arg(ap, unsigned int), "0123456789ABCDEF"));
	else if (format == 'p')
		return (ft_printerr_ptr((unsigned long)va_arg(ap, void *)));
	else if (format == 'u')
		return (ft_printerr_ui(va_arg(ap, unsigned int)));
	return (0);
}

int	ft_printerr(const char *format, ...)
{
	va_list	ap;
	int		len;
	int		i;

	va_start(ap, format);
	len = 0;
	i = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			len += ft_printerr_conv(format[i], ap);
		}
		else
			len += ft_printerr_char(format[i]);
		i++;
	}
	va_end(ap);
	return (len);
}

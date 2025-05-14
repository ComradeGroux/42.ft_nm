/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printerr_ptr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgroux <vgroux@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:29:25 by vgroux            #+#    #+#             */
/*   Updated: 2025/05/14 13:28:57 by vgroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printerr_ptr(unsigned long ptr)
{
	int		len;
	char	*str;

	len = ft_printerr_str("0x");
	if (ptr == 0)
		len += ft_printerr_char('0');
	else
	{
		str = ft_ulltoa_base(ptr, "0123456789abcdef");
		if (!str)
			return (0);
		len += ft_printerr_str(str);
		free(str);
	}
	return (len);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgroux <vgroux@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:17:43 by vgroux            #+#    #+#             */
/*   Updated: 2025/05/13 15:38:30 by vgroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_nm.h"

int exit_nm(int exit_status, int fd, char *filename, char *reason)
{
	if (fd > -1)
		close(fd);
	
	if (reason)
	{
		if (filename)
			ft_printf("nm: '%s': %s\n", filename, reason);
		else
			ft_printf("nm: %s\n", reason);
	}


	return(exit_status);
}
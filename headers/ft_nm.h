/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nm.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgroux <vgroux@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:14:45 by vgroux            #+#    #+#             */
/*   Updated: 2025/05/13 15:38:25 by vgroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <elf.h>
#include <fcntl.h>
#include <sys/stat.h>


#include "libft.h"

typedef enum {
	OOPS_UNDEFINED = 0
} e_oops;

int main(int argc, char**argv);

int nm_x32(void *file, size_t filesize);
int nm_x64(void *file, size_t filesize);

void print();

int exit_nm(int exit_status, int fd, char *filename, char *reason);

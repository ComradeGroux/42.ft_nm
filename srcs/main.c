/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgroux <vgroux@student.42lausanne.ch>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:15:00 by vgroux            #+#    #+#             */
/*   Updated: 2025/05/13 15:39:15 by vgroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_nm.h"

int nm(char *filename)
{
	int fd = 0;
	// int ret = 0;
	// int arch = 0;
	struct stat file_stat;
	// void *file;
	
	if ((fd = open(filename, O_RDONLY)) == -1)
		return exit_nm(EXIT_FAILURE, fd, filename, "No such file");
	if (fstat(fd, &file_stat) == -1)
		return exit_nm(EXIT_FAILURE, fd, NULL, "fstat() failed");
	
	
	// if (arch == ELFCLASS32)
	// 	ret = nm_x32(file, file_stat.st_size);
	// else
	// 	ret = nm_x64(file, file_stat.st_size);


	return exit_nm(EXIT_SUCCESS, fd, filename, NULL);
}

/**
 * CAN USE:
 * - mmap
 * - munmap
 * - fstat
 * - perror
 * - strerror
 * - open
 * - close
 * - write
 * - malloc
 * - free
 * - exit
 */
int main(int argc, char **argv)
{
	int ret = 0;

	if (argc == 1)
		ret = nm("a.out");

	for (int i = 1; i < argc; i++)
		ret += nm(argv[i]);

	return 0;
}


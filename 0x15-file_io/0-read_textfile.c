#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- function that reads a text file and prints it
 * to the POSIX standard output.
 * @filename: text file to readed.
 * @letters: THE number of letters to be read
 *
 * Return: number bytes read/printed
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes;
	int fd;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return(0);
	fd = open(filename, 0_RDONLY);
	if (fd == -1)
		return (0);
	bytes = read(fd, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &but[0], bytes);
	close(fd);
	return (bytes);
}

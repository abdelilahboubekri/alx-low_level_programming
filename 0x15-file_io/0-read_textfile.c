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
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t m;

	fd = open(filename, O_RDONLY);
	if (d == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(d, buf, letters);
	m = write(STDOUT_FILENO, buf, m);

	free(buf);
	close(fd);
	return (m);
}


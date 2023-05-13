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
	ssize_t a, b;
	char *buf;
	int fd;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	a = read(fd, buf, letters);
    b = write(STDOUT_FILENO, buf, a);

	close(fd);

	free(buf);

	return (b);

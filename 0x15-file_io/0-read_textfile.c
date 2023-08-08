#include "main.h"
#include <stdlib.h>
/*
 * read_textfile - reads a text file and prints it to the
 * POSIX STDOUT
 * @filename : the text file being read
 * @letters: the number of letters tht should be read and printed
 * return: the actual number of letters to be read and printed
 * 0 if the file cant be opened or read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc (sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
